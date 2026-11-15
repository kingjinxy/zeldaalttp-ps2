	THUMB_FUNC_START sub_08077CFC
sub_08077CFC: @ 0x08077CFC
	push {r4,lr}
	mov r2, #8
	ldr r4, _08077D38  @ =gRam
	ldr r1, _08077D3C  @ =0x000009C6
	add r0, r4, r1
	ldr r1, _08077D40  @ =gUnknown_08150B08
	ldrh r3, [r0]
_08077D0A:
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r3, r0
	bne _08077D0A
	add r0, r2, #0
	add r0, r0, #10
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r0, _08077D44  @ =0x00000B54
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
	add r0, r2, #0
	bl sub_08078504
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077D38:
	.4byte gRam
_08077D3C:
	.4byte 0x000009C6
_08077D40:
	.4byte gUnknown_08150B08
_08077D44:
	.4byte 0x00000B54
	THUMB_FUNC_END sub_08077CFC

