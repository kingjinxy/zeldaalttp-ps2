	THUMB_FUNC_START sub_08128FBC
sub_08128FBC: @ 0x08128FBC
	push {r4,r5,lr}
	ldr r2, _08128FE8  @ =gRam
	ldr r0, _08128FEC  @ =0x00001B06
	add r3, r2, r0
	ldrb r5, [r3]
	sub r0, r0, #52
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _08128FF0  @ =0x00001ACD
	add r4, r2, r0
	ldrb r0, [r4]
	strb r0, [r3]
	ldrh r0, [r1]
	ldr r1, _08128FF4  @ =gTextPointer
	add r0, r0, r1
	ldrb r1, [r0]
	cmp r1, #255
	bne _08128FF8
	strb r5, [r4]
	b _08129020
_08128FE8:
	.4byte gRam
_08128FEC:
	.4byte 0x00001B06
_08128FF0:
	.4byte 0x00001ACD
_08128FF4:
	.4byte gTextPointer
_08128FF8:
	strb r1, [r4]
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #6]
	cmp r0, #0
	beq _0812900A
	cmp r0, #2
	beq _08129018
	b _08129020
_0812900A:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _08129020
	mov r0, #4
	b _0812901E
_08129018:
	cmp r1, #0
	beq _08129020
	mov r0, #1
_0812901E:
	strb r0, [r4]
_08129020:
	ldr r3, _08129044  @ =0x00001ACD
	add r0, r2, r3
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #55
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _08129048  @ =0x00001AD2
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r0, #0
	pop {r4,r5}
	pop {r1}
	bx r1
_08129044:
	.4byte 0x00001ACD
_08129048:
	.4byte 0x00001AD2
	THUMB_FUNC_END sub_08128FBC

