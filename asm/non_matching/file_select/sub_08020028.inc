	THUMB_FUNC_START sub_08020028
sub_08020028: @ 0x08020028
	push {r4,lr}
	add r4, r0, #0
	ldr r2, [r4, #100]
	mov r1, #12
	bl sub_08009974
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r0, #128
	and r0, r0, r3
	cmp r0, #0
	beq _08020058
	add r0, r4, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r1, #3
	mov r0, #24
	and r0, r0, r3
	and r1, r1, r2
	lsr r0, r0, #3
	cmp r1, r0
	bne _08020058
	mov r0, #1
	b _0802005A
_08020058:
	mov r0, #0
_0802005A:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08020028

