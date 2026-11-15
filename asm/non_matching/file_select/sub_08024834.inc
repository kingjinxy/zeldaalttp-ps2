	THUMB_FUNC_START sub_08024834
sub_08024834: @ 0x08024834
	push {r4,lr}
	add r4, r0, #0
	add r2, r4, #0
	add r2, r2, #110
	ldrh r1, [r2]
	mov r0, #192
	and r0, r0, r1
	cmp r0, #192
	bne _08024860
	mov r0, #16
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08024BDC
	add r0, r4, #0
	bl sub_08024C90
	ldr r0, [r4, #88]
	add r1, r4, #0
	bl sub_0803D3D0
	b _08024892
_08024860:
	mov r0, #63
	and r0, r0, r1
	strh r0, [r2]
	add r0, r4, #0
	bl 0x08003828
	add r1, r4, #0
	add r1, r1, #41
	ldrb r2, [r1]
	mov r0, #1
	and r0, r0, r2
	cmp r0, #0
	beq _08024886
	mov r0, #0
	strb r0, [r1]
	add r0, r4, #0
	bl sub_08024EFC
	b _08024892
_08024886:
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _08024892
	mov r0, #19
	strb r0, [r4, #20]
_08024892:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024834

