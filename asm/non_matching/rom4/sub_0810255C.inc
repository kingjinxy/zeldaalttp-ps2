	THUMB_FUNC_START sub_0810255C
sub_0810255C: @ 0x0810255C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _0810257C  @ =gRam
	ldr r1, _08102580  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08102584
	add r0, r4, #0
	bl sub_08102C50
	b _08102596
	.byte 0x00
	.byte 0x00
_0810257C:
	.4byte gRam
_08102580:
	.4byte 0x00000F52
_08102584:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08102604
_08102596:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _08102604
	ldr r5, _0810260C  @ =gRam
	ldr r2, _08102610  @ =0x000010C2
	add r0, r5, r2
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #1
	bne _081025E2
	strb r3, [r2]
	ldr r1, _08102614  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #6
	strb r1, [r0]
	ldr r2, _08102618  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _0810261C  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
	sub r2, r2, #176
	add r0, r5, r2
	add r0, r4, r0
	strb r3, [r0]
	ldr r1, _08102620  @ =gUnknown_0200C4B8
	mov r0, #2
	strb r0, [r1]
_081025E2:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08102604
	ldr r1, _08102624  @ =gUnknown_0817B798
	ldr r2, _08102614  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08102604:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_0810260C:
	.4byte gRam
_08102610:
	.4byte 0x000010C2
_08102614:
	.4byte 0x00000F52
_08102618:
	.4byte 0x00000FC2
_0810261C:
	.4byte 0x00000F22
_08102620:
	.4byte gUnknown_0200C4B8
_08102624:
	.4byte gUnknown_0817B798
	THUMB_FUNC_END sub_0810255C

