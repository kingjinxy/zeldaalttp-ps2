	THUMB_FUNC_START sub_080806CC
sub_080806CC: @ 0x080806CC
	push {lr}
	sub sp, sp, #4
	ldr r1, _08080708  @ =gRam
	ldr r2, _0808070C  @ =0x000009AC
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #26
	beq _08080700
	add r2, r2, #252
	add r0, r1, r2
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08080700
	mov r1, sp
	mov r2, #246
	lsl r2, r2, #1
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08080710  @ =gUnknown_0201A000
	ldr r2, _08080714  @ =0x01001000
	mov r0, sp
	bl CpuSet
_08080700:
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08080708:
	.4byte gRam
_0808070C:
	.4byte 0x000009AC
_08080710:
	.4byte gUnknown_0201A000
_08080714:
	.4byte 0x01001000
	THUMB_FUNC_END sub_080806CC

