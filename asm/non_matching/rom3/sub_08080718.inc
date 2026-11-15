	THUMB_FUNC_START sub_08080718
sub_08080718: @ 0x08080718
	push {lr}
	sub sp, sp, #4
	ldr r0, _08080744  @ =gUnknown_020020CA
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0808073E
	mov r1, sp
	mov r2, #246
	lsl r2, r2, #1
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08080748  @ =gUnknown_0201A000
	ldr r2, _0808074C  @ =0x01001000
	mov r0, sp
	bl CpuSet
_0808073E:
	add sp, sp, #4
	pop {r0}
	bx r0
_08080744:
	.4byte gUnknown_020020CA
_08080748:
	.4byte gUnknown_0201A000
_0808074C:
	.4byte 0x01001000
	THUMB_FUNC_END sub_08080718

