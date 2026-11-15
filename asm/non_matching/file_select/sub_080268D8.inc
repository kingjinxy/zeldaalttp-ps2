	THUMB_FUNC_START sub_080268D8
sub_080268D8: @ 0x080268D8
	push {r4,lr}
	add r4, r0, #0
	bl sub_08026A6C
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _08026954  @ =gUnknown_03006A30
	mov r0, #1
	and r0, r0, r2
	cmp r0, #0
	beq _080268FC
	ldrh r1, [r3, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _080268FC
	mov r0, #254
	and r2, r2, r0
_080268FC:
	add r3, r3, #144
	mov r0, #2
	and r0, r0, r2
	cmp r0, #0
	beq _08026914
	ldrh r1, [r3, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _08026914
	mov r0, #253
	and r2, r2, r0
_08026914:
	add r3, r3, #144
	mov r0, #4
	and r0, r0, r2
	cmp r0, #0
	beq _0802692C
	ldrh r1, [r3, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _0802692C
	mov r0, #251
	and r2, r2, r0
_0802692C:
	add r3, r3, #144
	mov r0, #8
	and r0, r0, r2
	cmp r0, #0
	beq _08026944
	ldrh r1, [r3, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _08026944
	mov r0, #247
	and r2, r2, r0
_08026944:
	cmp r2, #0
	bne _0802694C
	mov r0, #3
	strb r0, [r4, #20]
_0802694C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08026954:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_080268D8

