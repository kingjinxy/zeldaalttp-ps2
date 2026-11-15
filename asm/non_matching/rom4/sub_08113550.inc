	THUMB_FUNC_START sub_08113550
sub_08113550: @ 0x08113550
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0811357C  @ =gRam
	ldr r1, _08113580  @ =0x00000F62
	add r0, r5, r1
	add r2, r4, r0
	ldrb r1, [r2]
	add r0, r1, #0
	cmp r0, #0
	bne _08113588
	ldr r3, _08113584  @ =0x00000FC2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08113574
	b _081136DE
_08113574:
	add r0, r1, #1
	strb r0, [r2]
	b _081136DE
	.byte 0x00
	.byte 0x00
_0811357C:
	.4byte gRam
_08113580:
	.4byte 0x00000F62
_08113584:
	.4byte 0x00000FC2
_08113588:
	cmp r0, #1
	beq _0811358E
	b _08113684
_0811358E:
	mov r6, #0
	ldr r1, _08113604  @ =0x000016C4
	add r0, r5, r1
	ldrh r1, [r0]
	ldr r2, _08113608  @ =0x00000968
	add r0, r5, r2
	strh r1, [r0]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r5, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	add r0, r4, #0
	mov r1, #18
	bl sub_080C2DCC
	ldr r3, _0811360C  @ =0x00000F12
	add r0, r5, r3
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08113610  @ =0x00000FB2
	add r2, r5, r3
	add r2, r4, r2
	mov r1, #3
	eor r0, r0, r1
	lsl r0, r0, #1
	strb r0, [r2]
	ldr r2, _08113614  @ =0x00001082
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	sub r3, r3, #64
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08113618
	cmp r0, #1
	beq _08113628
	b _08113644
	.byte 0x00
	.byte 0x00
_08113604:
	.4byte 0x000016C4
_08113608:
	.4byte 0x00000968
_0811360C:
	.4byte 0x00000F12
_08113610:
	.4byte 0x00000FB2
_08113614:
	.4byte 0x00001082
_08113618:
	ldr r1, _08113624  @ =0x00001718
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #3
	beq _08113644
	b _08113648
_08113624:
	.4byte 0x00001718
_08113628:
	ldr r2, _08113670  @ =0x00001710
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08113644
	ldr r1, _08113674  @ =gUnknown_02010995
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #48
	bls _08113644
	mov r6, #1
_08113644:
	cmp r6, #0
	beq _081136DE
_08113648:
	ldr r2, _08113678  @ =gRam
	ldr r3, _0811367C  @ =0x00000F62
	add r1, r2, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08113680  @ =0x00000FC2
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #32
	strb r0, [r2]
	add r0, r4, #0
	bl sub_08116940
	add r0, r4, #0
	mov r1, #21
	bl sub_080CF018
	b _081136DE
_08113670:
	.4byte 0x00001710
_08113674:
	.4byte gUnknown_02010995
_08113678:
	.4byte gRam
_0811367C:
	.4byte 0x00000F62
_08113680:
	.4byte 0x00000FC2
_08113684:
	cmp r0, #2
	bne _081136DE
	ldr r1, _08113718  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r3, _0811371C  @ =0x00000F22
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _08113720  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r3, [r6]
	cmp r3, #0
	bne _081136DE
	mov r1, #10
	strb r3, [r2]
	ldr r2, _08113724  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	strb r3, [r0]
	sub r2, r2, #64
	add r0, r5, r2
	add r0, r4, r0
	strb r3, [r0]
	strb r1, [r6]
	ldr r0, _08113728  @ =gUnknown_02010990
	strb r3, [r0]
	add r0, r0, #3
	strb r3, [r0]
	ldr r0, _0811372C  @ =0x00000EA5
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	strb r0, [r1]
	ldr r0, _08113730  @ =gUnknown_02010995
	strb r3, [r0]
	ldr r1, _08113734  @ =gUnknown_02010994
	mov r0, #255
	strb r0, [r1]
_081136DE:
	ldr r1, _08113738  @ =gRam
	ldr r2, _0811373C  @ =0x00000EE2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r3, _08113740  @ =0x00000F02
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r3, _08113744  @ =0x00000952
	add r0, r1, r3
	ldrh r0, [r0]
	sub r2, r2, r0
	add r3, r3, #14
	add r0, r1, r3
	mov r3, #0
	strh r2, [r0]
	ldr r0, _08113748  @ =0x00000969
	add r1, r1, r0
	strb r3, [r1]
	add r0, r4, #0
	mov r1, #13
	bl sub_080C57F8
	pop {r4-r6}
	pop {r0}
	bx r0
_08113718:
	.4byte 0x00000F12
_0811371C:
	.4byte 0x00000F22
_08113720:
	.4byte 0x00000FC2
_08113724:
	.4byte 0x00000F92
_08113728:
	.4byte gUnknown_02010990
_0811372C:
	.4byte 0x00000EA5
_08113730:
	.4byte gUnknown_02010995
_08113734:
	.4byte gUnknown_02010994
_08113738:
	.4byte gRam
_0811373C:
	.4byte 0x00000EE2
_08113740:
	.4byte 0x00000F02
_08113744:
	.4byte 0x00000952
_08113748:
	.4byte 0x00000969
	THUMB_FUNC_END sub_08113550

