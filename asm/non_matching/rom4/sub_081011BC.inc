	THUMB_FUNC_START sub_081011BC
sub_081011BC: @ 0x081011BC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r3, _08101268  @ =gRam
	ldr r0, _0810126C  @ =0x000016C4
	add r2, r3, r0
	ldr r1, _08101270  @ =0x00001622
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r4, _08101274  @ =0x00001623
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #14
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #27
	bhi _0810125E
	mov r0, #182
	lsl r0, r0, #5
	add r2, r3, r0
	ldr r1, _08101278  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	add r4, r4, #2
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #27
	bhi _0810125E
	ldr r1, _0810127C  @ =0x000017AA
	add r0, r3, r1
	ldr r2, _08101280  @ =0x0000180D
	add r1, r3, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _0810125E
	add r4, r4, #169
	add r4, r4, r3
	mov r8, r4
	ldrb r5, [r4]
	mvn r5, r5
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r0, _08101284  @ =0x000016CD
	add r6, r3, r0
	ldrb r4, [r6]
	mvn r4, r4
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _08101288  @ =0x00001702
	add r1, r3, r2
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810128C  @ =0x00001805
	add r1, r3, r0
	mov r0, #8
	strb r0, [r1]
	sub r2, r2, #10
	add r1, r3, r2
	mov r0, #16
	strb r0, [r1]
	add r0, r7, #0
	mov r1, #24
	bl sub_080C4378
	mov r0, r8
	strb r5, [r0]
	strb r4, [r6]
_0810125E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08101268:
	.4byte gRam
_0810126C:
	.4byte 0x000016C4
_08101270:
	.4byte 0x00001622
_08101274:
	.4byte 0x00001623
_08101278:
	.4byte 0x00001624
_0810127C:
	.4byte 0x000017AA
_08101280:
	.4byte 0x0000180D
_08101284:
	.4byte 0x000016CD
_08101288:
	.4byte 0x00001702
_0810128C:
	.4byte 0x00001805
	THUMB_FUNC_END sub_081011BC

