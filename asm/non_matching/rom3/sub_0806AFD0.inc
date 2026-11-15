	THUMB_FUNC_START sub_0806AFD0
sub_0806AFD0: @ 0x0806AFD0
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r4, _0806B044  @ =gRam
	mov r1, #201
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #0
	mov r8, r1
	mov r6, #0
	strh r6, [r0]
	ldr r0, _0806B048  @ =0x00000A4C
	add r5, r4, r0
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	ldr r0, _0806B04C  @ =0x00000A3C
	add r1, r4, r0
	mov r0, #24
	strh r0, [r1]
	ldr r0, _0806B050  @ =0x00000AB6
	add r1, r4, r0
	mov r0, #8
	strh r0, [r1]
	bl sub_0807545C
	strh r6, [r5]
	bl sub_08133534
	bl sub_0806A0C0
	ldr r0, _0806B054  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0806B058  @ =0x00001718
	add r1, r4, r0
	mov r0, #20
	strb r0, [r1]
	ldr r1, _0806B05C  @ =0x00000A28
	add r0, r4, r1
	strh r6, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strh r6, [r0]
	add r1, r1, #126
	add r0, r4, r1
	strh r6, [r0]
	ldr r0, _0806B060  @ =0x000016D6
	add r4, r4, r0
	mov r1, r8
	strb r1, [r4]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_0806B044:
	.4byte gRam
_0806B048:
	.4byte 0x00000A4C
_0806B04C:
	.4byte 0x00000A3C
_0806B050:
	.4byte 0x00000AB6
_0806B054:
	.4byte 0x000009AD
_0806B058:
	.4byte 0x00001718
_0806B05C:
	.4byte 0x00000A28
_0806B060:
	.4byte 0x000016D6
	THUMB_FUNC_END sub_0806AFD0

