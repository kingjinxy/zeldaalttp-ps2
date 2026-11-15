	THUMB_FUNC_START sub_0802C070
sub_0802C070: @ 0x0802C070
	push {r4-r7,lr}
	add r7, r0, #0
	lsl r1, r1, #16
	lsr r6, r1, #16
	ldr r4, _0802C0D0  @ =gUnknown_0202A3F0
_0802C07A:
	ldrb r0, [r4, #2]
	cmp r0, r6
	beq _0802C0C2
	add r4, r4, #4
	ldr r5, _0802C0D4  @ =gUnknown_0202A49C
	cmp r4, r5
	bcc _0802C07A
	add r0, r6, #0
	bl sub_0802C23C
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r5, #0
	sub r4, r4, #140
_0802C096:
	ldrb r0, [r4, #1]
	cmp r0, #0
	bne _0802C0D8
	mov r1, #0
	cmp r1, r2
	bcs _0802C0B6
_0802C0A2:
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, r2
	bcs _0802C0B6
	lsl r0, r1, #2
	add r0, r0, r4
	ldrb r0, [r0, #1]
	cmp r0, #0
	beq _0802C0A2
_0802C0B6:
	cmp r1, r2
	bne _0802C0D8
	add r0, r4, #0
	add r1, r6, #0
	bl sub_0802C1C0
_0802C0C2:
	add r0, r7, #0
	add r1, r4, #0
	bl sub_0802C180
	mov r0, #0
	b _0802C0E2
	.byte 0x00
	.byte 0x00
_0802C0D0:
	.4byte gUnknown_0202A3F0
_0802C0D4:
	.4byte gUnknown_0202A49C
_0802C0D8:
	add r4, r4, #4
	ldr r0, _0802C0E8  @ =gUnknown_0202A49C
	cmp r4, r0
	bcc _0802C096
	mov r0, #255
_0802C0E2:
	pop {r4-r7}
	pop {r1}
	bx r1
_0802C0E8:
	.4byte gUnknown_0202A49C
	THUMB_FUNC_END sub_0802C070

