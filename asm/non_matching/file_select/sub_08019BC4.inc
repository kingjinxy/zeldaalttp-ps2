	THUMB_FUNC_START sub_08019BC4
sub_08019BC4: @ 0x08019BC4
	push {r4,lr}
	add r4, r0, #0
	ldr r3, _08019C18  @ =gUnknown_03000450
	ldr r2, _08019C1C  @ =gUnknown_03006A30
	ldr r0, _08019C20  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r1, [r3]
	ldr r0, [r0]
	cmp r1, r0
	beq _08019BE6
	bl sub_0803DF84
_08019BE6:
	ldr r0, [r4, #56]
	ldr r1, _08019C24  @ =0xFFFF8000
	add r0, r0, r1
	str r0, [r4, #56]
	mov r0, #58
	ldrsh r1, [r4, r0]
	mov r0, #64
	neg r0, r0
	cmp r1, r0
	bne _08019C12
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #50
	strb r0, [r4, #23]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
_08019C12:
	pop {r4}
	pop {r0}
	bx r0
_08019C18:
	.4byte gUnknown_03000450
_08019C1C:
	.4byte gUnknown_03006A30
_08019C20:
	.4byte gLCDRegisterBuffer
_08019C24:
	.4byte 0xFFFF8000
	THUMB_FUNC_END sub_08019BC4

