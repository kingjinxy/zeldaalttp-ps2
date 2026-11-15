	THUMB_FUNC_START sub_0809945C
sub_0809945C: @ 0x0809945C
	push {lr}
	ldr r2, _080994B4  @ =gRam
	ldr r1, _080994B8  @ =0x000016D5
	add r0, r2, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	ldr r3, _080994BC  @ =0x00001726
	add r1, r2, r3
	mov r3, #0
	strb r0, [r1]
	ldr r1, _080994C0  @ =0x00001804
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080994B0
	sub r1, r1, #133
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #64
	beq _080994B0
	sub r1, r1, #47
	add r0, r2, r1
	strb r3, [r0]
	add r1, r1, #143
	add r0, r2, r1
	strb r3, [r0]
	sub r1, r1, #41
	add r0, r2, r1
	strb r3, [r0]
	bl sub_08092B0C
	mov r0, #1
	mov r1, #29
	bl sub_080AD510
	bl sub_080C2774
	mov r0, #120
	bl sub_0809E49C
	bl sub_08099324
_080994B0:
	pop {r0}
	bx r0
_080994B4:
	.4byte gRam
_080994B8:
	.4byte 0x000016D5
_080994BC:
	.4byte 0x00001726
_080994C0:
	.4byte 0x00001804
	THUMB_FUNC_END sub_0809945C

