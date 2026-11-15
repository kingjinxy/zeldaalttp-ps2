	THUMB_FUNC_START sub_080994C4
sub_080994C4: @ 0x080994C4
	push {r4-r6,lr}
	ldr r1, _08099544  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r6, r1, r0
	mov r0, #0
	strb r0, [r6]
	ldr r2, _08099548  @ =0x00000961
	add r5, r1, r2
	strb r0, [r5]
	ldr r2, _0809954C  @ =0x00000545
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #15
	and r0, r0, r2
	add r4, r1, #0
	cmp r0, #0
	beq _080994FC
	mov r3, #128
	ldr r1, _08099550  @ =0x000017E1
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080994F6
	mov r3, #80
_080994F6:
	strb r3, [r6]
	mov r0, #1
	strb r0, [r5]
_080994FC:
	ldr r2, _08099554  @ =0x000016CD
	add r0, r4, r2
	mov r1, #0
	strb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	mov r2, #151
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	mov r3, #3
	ldr r1, _08099558  @ =0x00001727
	add r0, r4, r1
	ldrb r2, [r0]
	mov r1, #1
_0809952E:
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809955C
	lsr r2, r2, #1
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r0, #0
	blt _0809952E
	b _0809958E
_08099544:
	.4byte gRam
_08099548:
	.4byte 0x00000961
_0809954C:
	.4byte 0x00000545
_08099550:
	.4byte 0x000017E1
_08099554:
	.4byte 0x000016CD
_08099558:
	.4byte 0x00001727
_0809955C:
	add r1, r3, #0
	cmp r3, #0
	beq _08099566
	cmp r3, #2
	beq _0809956C
_08099566:
	neg r0, r2
	lsl r0, r0, #24
	lsr r2, r0, #24
_0809956C:
	mov r0, #2
	and r1, r1, r0
	lsl r0, r1, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _0809957E
	cmp r3, #2
	beq _08099584
	b _0809958A
_0809957E:
	mov r1, #151
	lsl r1, r1, #4
	b _08099586
_08099584:
	ldr r1, _08099594  @ =0x00000974
_08099586:
	add r0, r4, r1
	strh r2, [r0]
_0809958A:
	bl sub_080985C0
_0809958E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08099594:
	.4byte 0x00000974
	THUMB_FUNC_END sub_080994C4

