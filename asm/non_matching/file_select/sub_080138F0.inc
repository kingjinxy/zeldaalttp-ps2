	THUMB_FUNC_START sub_080138F0
sub_080138F0: @ 0x080138F0
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r1, r1, #24
	lsr r6, r1, #24
	ldrh r0, [r4]
	lsr r2, r0, #9
	mov r1, #15
	and r2, r2, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r2, #6
	bne _08013940
	cmp r5, #92
	bne _0801391E
	ldr r2, _08013938  @ =gUnknown_0201EF30
	add r3, r2, #0
	add r3, r3, #192
	add r0, r4, #0
	add r1, r6, #0
	bl sub_08013948
	cmp r0, #0
	bne _08013934
_0801391E:
	cmp r5, #8
	bne _08013940
	ldr r2, _0801393C  @ =gUnknown_02003110
	add r3, r2, #0
	add r3, r3, #192
	add r0, r4, #0
	add r1, r6, #0
	bl sub_08013948
	cmp r0, #0
	beq _08013940
_08013934:
	mov r0, #0
	b _08013942
_08013938:
	.4byte gUnknown_0201EF30
_0801393C:
	.4byte gUnknown_02003110
_08013940:
	mov r0, #1
_08013942:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080138F0

