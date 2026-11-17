	THUMB_FUNC_START sub_08014134
sub_08014134: @ 0x08014134
	push {r4,r5,lr}
	add r4, r1, #0
	lsl r2, r2, #16
	lsr r5, r2, #16
	ldr r0, _0801415C  @ =gUnknown_03000200
	ldr r0, [r0]
	cmp r0, #0
	bne _08014160
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08014160
	mov r0, #15
	add r1, r5, #0
	add r2, r4, #0
	bl sub_08013EC0
	b _08014174
_0801415C:
	.4byte gUnknown_03000200
_08014160:
	ldr r0, _0801417C  @ =gUnknown_08429B4C
	ldrb r1, [r4, #10]
	bl sub_08014180
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r5, #0
	add r2, r4, #0
	bl sub_08013EC0
_08014174:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801417C:
	.4byte gUnknown_08429B4C
	THUMB_FUNC_END sub_08014134

