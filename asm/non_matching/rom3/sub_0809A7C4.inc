	THUMB_FUNC_START sub_0809A7C4
sub_0809A7C4: @ 0x0809A7C4
	push {r4-r7,lr}
	ldr r1, _0809A85C  @ =gRam
	ldr r2, _0809A860  @ =0x0000172B
	add r0, r1, r2
	ldrb r4, [r0]
	mov r0, #12
	and r0, r0, r4
	add r6, r1, #0
	cmp r0, #0
	beq _0809A802
	mov r0, #3
	and r0, r0, r4
	cmp r0, #0
	beq _0809A802
	ldr r1, _0809A864  @ =0x00001718
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _0809A802
	sub r2, r2, #93
	add r1, r6, r2
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0809A868  @ =0x000016CD
	add r1, r6, r0
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_0809A802:
	add r5, r6, #0
	ldr r1, _0809A86C  @ =0x0000172C
	add r7, r5, r1
	ldrb r0, [r7]
	cmp r0, #1
	bne _0809A82E
	ldr r2, _0809A870  @ =0x000016CC
	add r3, r5, r2
	ldrb r2, [r3]
	mov r1, #12
	add r0, r1, #0
	and r0, r0, r2
	mov r4, #0
	strb r0, [r3]
	ldr r0, _0809A874  @ =0x00001727
	add r2, r5, r0
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	ldr r1, _0809A878  @ =0x000016CE
	add r0, r5, r1
	strb r4, [r0]
_0809A82E:
	ldrb r0, [r7]
	cmp r0, #2
	bne _0809A854
	ldr r2, _0809A870  @ =0x000016CC
	add r3, r6, r2
	ldrb r2, [r3]
	mov r1, #3
	add r0, r1, #0
	and r0, r0, r2
	mov r4, #0
	strb r0, [r3]
	ldr r0, _0809A874  @ =0x00001727
	add r2, r6, r0
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	ldr r1, _0809A868  @ =0x000016CD
	add r0, r6, r1
	strb r4, [r0]
_0809A854:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809A85C:
	.4byte gRam
_0809A860:
	.4byte 0x0000172B
_0809A864:
	.4byte 0x00001718
_0809A868:
	.4byte 0x000016CD
_0809A86C:
	.4byte 0x0000172C
_0809A870:
	.4byte 0x000016CC
_0809A874:
	.4byte 0x00001727
_0809A878:
	.4byte 0x000016CE
	THUMB_FUNC_END sub_0809A7C4

