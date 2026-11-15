	THUMB_FUNC_START sub_08051F94
sub_08051F94: @ 0x08051F94
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldr r1, _0805205C  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #11]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	str r1, [r0, #84]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	bl sub_08051ED4
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, _08052060  @ =gLCDRegisterBuffer
	ldrb r1, [r1, #10]
	ldrb r0, [r0]
	cmp r1, r0
	bne _08052064
	ldr r0, [r7]
	mov r1, #6
	bl sub_08003870
	ldr r0, [r7]
	ldr r1, _08052060  @ =gLCDRegisterBuffer
	ldrb r2, [r1]
	add r1, r2, #0
	add r1, r1, #8
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	b _08052078
	.byte 0x00
	.byte 0x00
_0805205C:
	.4byte gUnknown_03006A30
_08052060:
	.4byte gLCDRegisterBuffer
_08052064:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldrb r0, [r1, #10]
	add r1, r0, #2
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
_08052078:
	ldr r0, [r7]
	ldr r1, _080520F4  @ =gUnknown_03006C80
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, #12
	add r2, r1, r3
	ldr r1, [r2]
	str r1, [r0, #96]
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #100]
	mov r0, #13
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
	mov r0, #13
	mov r1, #4
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
	mov r0, #13
	mov r1, #5
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
	mov r0, #13
	mov r1, #6
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
	mov r0, #13
	mov r1, #7
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
_080520F4:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08051F94

