	THUMB_FUNC_START sub_08012A50
sub_08012A50: @ 0x08012A50
	push {r4,r5,lr}
	add r2, r0, #0
	lsl r2, r2, #16
	lsr r2, r2, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	ldr r0, _08012A8C  @ =gUnknown_08138104
	add r1, r2, #0
	bl sub_08012A24
	add r4, r0, #0
	ldr r0, _08012A90  @ =0x0000FFFF
	cmp r4, r0
	beq _08012A86
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	mov r0, #32
	cmp r1, #0
	beq _08012A7C
	add r0, r4, #0
_08012A7C:
	mov r2, #128
	lsl r2, r2, #7
	add r1, r5, #0
	bl 0x08008F78
_08012A86:
	pop {r4,r5}
	pop {r0}
	bx r0
_08012A8C:
	.4byte gUnknown_08138104
_08012A90:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08012A50

