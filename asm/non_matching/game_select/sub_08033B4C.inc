	THUMB_FUNC_START sub_08033B4C
sub_08033B4C: @ 0x08033B4C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldr r0, [r4, #56]
	ldr r1, _08033B78  @ =0xFFFF8000
	add r0, r0, r1
	str r0, [r4, #56]
	mov r0, #58
	ldrsh r1, [r4, r0]
	mov r0, #20
	neg r0, r0
	cmp r1, r0
	bne _08033B7C
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #133
	lsl r0, r0, #2
	bl play_sound
	b _08033BAA
	.byte 0x00
	.byte 0x00
_08033B78:
	.4byte 0xFFFF8000
_08033B7C:
	mov r0, #10
	neg r0, r0
	cmp r1, r0
	bne _08033BAA
	ldrb r0, [r4, #24]
	cmp r0, #0
	bne _08033BAA
	mov r0, #88
	mov r1, #5
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08033BAA
	mov r3, #128
	lsl r3, r3, #11
	add r0, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	mov r0, #1
	strb r0, [r4, #24]
_08033BAA:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08033B4C

