	THUMB_FUNC_START sub_080269F8
sub_080269F8: @ 0x080269F8
	push {r4-r6,lr}
	add r4, r0, #0
	bl sub_08000580
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _08026A18
	add r1, r4, #0
	add r1, r1, #120
	ldr r0, _08026A14  @ =0x0000FFFF
	strh r0, [r1]
	add r0, r2, #0
	b _08026A66
_08026A14:
	.4byte 0x0000FFFF
_08026A18:
	add r6, r4, #0
	add r6, r6, #124
	ldrh r0, [r6]
	add r5, r4, #0
	add r5, r5, #80
	ldrh r1, [r5]
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r0, #164
	lsl r0, r0, #1
	cmp r1, r0
	beq _08026A64
	add r0, r0, #2
	cmp r1, r0
	beq _08026A64
	add r0, r4, #0
	add r0, r0, #122
	ldrh r0, [r0]
	cmp r1, r0
	beq _08026A64
	ldrh r0, [r6]
	ldrh r1, [r5]
	bl 0x08008F58
	add r1, r4, #0
	add r1, r1, #120
	strh r0, [r1]
	ldrh r0, [r6]
	ldrh r1, [r5]
	bl 0x080093C8
	add r1, r4, #0
	add r1, r1, #126
	strb r0, [r1]
	mov r0, #16
	b _08026A66
_08026A64:
	mov r0, #0
_08026A66:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080269F8

