	THUMB_FUNC_START sub_0809A754
sub_0809A754: @ 0x0809A754
	push {r4,lr}
	ldr r1, _0809A7B0  @ =gRam
	ldr r0, _0809A7B4  @ =0x00001727
	add r3, r1, r0
	mov r0, #0
	strb r0, [r3]
	mov r2, #8
	ldr r4, _0809A7B8  @ =0x000016CD
	add r0, r1, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809A780
	cmp r0, #0
	blt _0809A774
	mov r2, #4
_0809A774:
	strb r2, [r3]
	ldr r3, _0809A7BC  @ =0x000016CC
	add r0, r1, r3
	strb r2, [r0]
	bl sub_0809A7C4
_0809A780:
	mov r2, #2
	ldr r3, _0809A7B0  @ =gRam
	ldr r4, _0809A7C0  @ =0x000016CE
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809A7A6
	cmp r0, #0
	blt _0809A796
	mov r2, #1
_0809A796:
	ldr r0, _0809A7B4  @ =0x00001727
	add r1, r3, r0
	ldrb r0, [r1]
	orr r2, r2, r0
	strb r2, [r1]
	ldr r1, _0809A7BC  @ =0x000016CC
	add r0, r3, r1
	strb r2, [r0]
_0809A7A6:
	bl sub_0809A7C4
	pop {r4}
	pop {r0}
	bx r0
_0809A7B0:
	.4byte gRam
_0809A7B4:
	.4byte 0x00001727
_0809A7B8:
	.4byte 0x000016CD
_0809A7BC:
	.4byte 0x000016CC
_0809A7C0:
	.4byte 0x000016CE
	THUMB_FUNC_END sub_0809A754

