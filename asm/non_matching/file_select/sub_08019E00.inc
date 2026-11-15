	THUMB_FUNC_START sub_08019E00
sub_08019E00: @ 0x08019E00
	push {r4,lr}
	add r4, r0, #0
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r2, #54
	ldrsh r1, [r4, r2]
	mov r3, #252
	lsl r3, r3, #1
	add r2, r3, #0
	bl 0x08003F54
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl 0x08009694
	ldr r0, _08019E54  @ =0xFFFFFE09
	add r1, r0, #0
	ldrh r2, [r4, #50]
	add r0, r1, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #2
	bhi _08019E46
	ldrh r2, [r4, #54]
	add r0, r1, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #2
	bhi _08019E46
	mov r0, #9
	strb r0, [r4, #20]
	mov r0, #60
	strb r0, [r4, #23]
_08019E46:
	add r0, r4, #0
	bl 0x08003828
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08019E54:
	.4byte 0xFFFFFE09
	THUMB_FUNC_END sub_08019E00

