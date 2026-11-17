	THUMB_FUNC_START sub_0801D0FC
sub_0801D0FC: @ 0x0801D0FC
	push {r4,lr}
	add r4, r0, #0
	bl sub_0800963C
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0801D12A
	ldrh r1, [r4, #50]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #8
	bne _0801D13A
	add r0, r4, #0
	bl sub_0801D3D8
	b _0801D13A
_0801D12A:
	ldrh r1, [r4, #54]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #8
	bne _0801D13A
	add r0, r4, #0
	bl sub_0801D3D8
_0801D13A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D0FC

