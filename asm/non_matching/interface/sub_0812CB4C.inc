	THUMB_FUNC_START sub_0812CB4C
sub_0812CB4C: @ 0x0812CB4C
	push {r4,r5,lr}
	add r4, r0, #0
	mov r5, #0
	ldrh r1, [r4]
	mov r0, #128
	lsl r0, r0, #2
	cmp r1, r0
	beq _0812CB64
	add r0, r0, #1
	cmp r1, r0
	beq _0812CB8E
	b _0812CBB6
_0812CB64:
	ldr r1, [r4, #8]
	cmp r1, #0
	beq _0812CBB6
_0812CB6A:
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812CB7A
	ldr r1, [r4, #4]
	add r0, r5, #0
	bl sub_0812C5F0
_0812CB7A:
	add r5, r5, #1
	ldr r0, [r4, #8]
	lsr r0, r0, #1
	str r0, [r4, #8]
	add r1, r0, #0
	cmp r1, #0
	beq _0812CBB6
	cmp r5, #19
	ble _0812CB6A
	b _0812CBB6
_0812CB8E:
	ldr r1, [r4, #8]
	cmp r1, #0
	beq _0812CBB6
_0812CB94:
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812CBA4
	ldrb r1, [r4, #4]
	add r0, r5, #0
	bl sub_0812C628
_0812CBA4:
	add r5, r5, #1
	ldr r0, [r4, #8]
	lsr r0, r0, #1
	str r0, [r4, #8]
	add r1, r0, #0
	cmp r1, #0
	beq _0812CBB6
	cmp r5, #19
	ble _0812CB94
_0812CBB6:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812CB4C

