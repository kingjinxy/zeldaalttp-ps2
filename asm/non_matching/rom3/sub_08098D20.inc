	THUMB_FUNC_START sub_08098D20
sub_08098D20: @ 0x08098D20
	push {lr}
	bl sub_0809E600
	bl sub_0808B434
	ldr r1, _08098D58  @ =gRam
	ldr r0, _08098D5C  @ =0x000016EB
	add r2, r1, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08098D96
	mov r0, #2
	strb r0, [r2]
	ldr r3, _08098D60  @ =0x00001789
	add r1, r1, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08098D64
	bl sub_08133668
	b _08098D68
_08098D58:
	.4byte gRam
_08098D5C:
	.4byte 0x000016EB
_08098D60:
	.4byte 0x00001789
_08098D64:
	bl sub_08133644
_08098D68:
	ldr r2, _08098D9C  @ =gRam
	ldr r0, _08098DA0  @ =0x00001789
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #8
	bne _08098D96
	mov r1, #0
	strb r1, [r3]
	ldr r3, _08098DA4  @ =0x00001718
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #245
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #28
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #239
	add r0, r2, r3
	strb r1, [r0]
	mov r0, #0
	bl sub_0808B480
_08098D96:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08098D9C:
	.4byte gRam
_08098DA0:
	.4byte 0x00001789
_08098DA4:
	.4byte 0x00001718
	THUMB_FUNC_END sub_08098D20

