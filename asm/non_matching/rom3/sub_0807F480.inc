	THUMB_FUNC_START sub_0807F480
sub_0807F480: @ 0x0807F480
	push {r4-r7,lr}
	sub sp, sp, #8
	ldr r4, _0807F4C8  @ =gRam
	ldr r1, _0807F4CC  @ =0x00000964
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r2, r0, #17
	str r2, [sp, #4]
	ldr r1, _0807F4D0  @ =gUnknown_08167790
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r3, [r0]
	mov r5, #151
	lsl r5, r5, #4
	add r1, r4, r5
	mov r6, #0
	strh r3, [r1]
	ldr r7, _0807F4D4  @ =0x00000968
	add r5, r4, r7
	mov r7, #0
	ldrsh r0, [r5, r7]
	cmp r0, #22
	bne _0807F4E4
	ldr r2, _0807F4D8  @ =0x00000202
	add r0, r3, r2
	strh r0, [r1]
	mov r3, #0
	ldrsh r2, [r1, r3]
	ldr r5, _0807F4DC  @ =0x00000AF4
	add r3, r4, r5
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r7, _0807F4E0  @ =0x00000C32
	b _0807F50C
	.byte 0x00
	.byte 0x00
_0807F4C8:
	.4byte gRam
_0807F4CC:
	.4byte 0x00000964
_0807F4D0:
	.4byte gUnknown_08167790
_0807F4D4:
	.4byte 0x00000968
_0807F4D8:
	.4byte 0x00000202
_0807F4DC:
	.4byte 0x00000AF4
_0807F4E0:
	.4byte 0x00000C32
_0807F4E4:
	cmp r0, #6
	bne _0807F4F4
	str r2, [sp]
	mov r0, #1
	mov r1, sp
	bl sub_0807E398
	b _0807F5F4
_0807F4F4:
	cmp r0, #20
	bne _0807F528
	ldr r2, _0807F51C  @ =0x00000202
	add r0, r3, r2
	strh r0, [r1]
	mov r3, #0
	ldrsh r2, [r1, r3]
	ldr r5, _0807F520  @ =0x00000AF6
	add r3, r4, r5
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r7, _0807F524  @ =0x00000C42
_0807F50C:
	add r1, r4, r7
	add r0, r0, r1
	asr r2, r2, #1
	strh r2, [r0]
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	b _0807F5F4
_0807F51C:
	.4byte 0x00000202
_0807F520:
	.4byte 0x00000AF6
_0807F524:
	.4byte 0x00000C42
_0807F528:
	cmp r0, #18
	bne _0807F54C
	ldr r0, _0807F544  @ =0x00001932
	add r2, r4, r0
	ldrh r0, [r2]
	lsl r0, r0, #1
	ldr r5, _0807F548  @ =0x00001934
	add r1, r4, r5
	add r0, r0, r1
	strh r3, [r0]
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	b _0807F5F4
_0807F544:
	.4byte 0x00001932
_0807F548:
	.4byte 0x00001934
_0807F54C:
	cmp r0, #63
	ble _0807F556
	bl sub_0807EA94
	b _0807F5F4
_0807F556:
	cmp r0, #10
	bne _0807F564
	ldr r7, _0807F560  @ =0x00000B08
	add r0, r4, r7
	b _0807F5A2
_0807F560:
	.4byte 0x00000B08
_0807F564:
	cmp r0, #12
	bne _0807F57C
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	orr r0, r0, r3
	strh r0, [r1]
	ldr r3, _0807F578  @ =0x00000B08
	add r0, r4, r3
	b _0807F5A2
_0807F578:
	.4byte 0x00000B08
_0807F57C:
	cmp r0, #14
	beq _0807F584
	cmp r0, #16
	bne _0807F590
_0807F584:
	ldr r5, _0807F58C  @ =0x00000B08
	add r0, r4, r5
	b _0807F5A2
	.byte 0x00
	.byte 0x00
_0807F58C:
	.4byte 0x00000B08
_0807F590:
	cmp r0, #4
	bne _0807F5B4
	mov r7, #128
	lsl r7, r7, #6
	add r0, r7, #0
	orr r0, r0, r3
	strh r0, [r1]
	ldr r1, _0807F5B0  @ =0x00000B08
	add r0, r4, r1
_0807F5A2:
	ldrh r0, [r0]
	str r0, [sp, #4]
	add r1, sp, #4
	mov r0, #1
	bl sub_0807E398
	b _0807F5F4
_0807F5B0:
	.4byte 0x00000B08
_0807F5B4:
	mov r2, #0
	ldrsh r0, [r5, r2]
	cmp r0, #2
	bne _0807F5C2
	bl sub_0807F2F8
	b _0807F5F4
_0807F5C2:
	cmp r0, #8
	bne _0807F5F0
	bl sub_0807F2F8
	ldr r3, _0807F5E8  @ =0x00000B08
	add r0, r4, r3
	ldrh r1, [r0]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r5, _0807F5EC  @ =0x000018D0
	add r0, r4, r5
	add r1, r1, r0
	ldrh r2, [r1]
	mov r7, #128
	lsl r7, r7, #6
	add r0, r7, #0
	orr r0, r0, r2
	strh r0, [r1]
	b _0807F5F4
_0807F5E8:
	.4byte 0x00000B08
_0807F5EC:
	.4byte 0x000018D0
_0807F5F0:
	bl sub_0807F2F8
_0807F5F4:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0807F480

