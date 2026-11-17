	THUMB_FUNC_START sub_0801A7F0
sub_0801A7F0: @ 0x0801A7F0
	push {r4,lr}
	add r2, r0, #0
	add r3, r2, #0
	add r3, r3, #43
	ldrb r1, [r3]
	mov r4, #8
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0801A81A
	ldrh r0, [r2, #54]
	mov r1, #15
	and r1, r1, r0
	cmp r1, #8
	beq _0801A824
	cmp r1, #7
	bhi _0801A816
	mov r0, #16
	b _0801A836
_0801A816:
	mov r0, #0
	b _0801A836
_0801A81A:
	ldrh r0, [r2, #50]
	mov r1, #15
	and r1, r1, r0
	cmp r1, #8
	bne _0801A82C
_0801A824:
	add r0, r2, #0
	bl sub_0801A850
	b _0801A84A
_0801A82C:
	cmp r1, #7
	bhi _0801A834
	strb r4, [r3]
	b _0801A838
_0801A834:
	mov r0, #24
_0801A836:
	strb r0, [r3]
_0801A838:
	mov r0, #4
	strb r0, [r2, #20]
	add r0, r2, #0
	add r0, r0, #43
	ldrb r1, [r0]
	lsr r1, r1, #3
	add r0, r2, #0
	bl sub_08003870
_0801A84A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A7F0

