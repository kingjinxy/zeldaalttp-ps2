	THUMB_FUNC_START sub_0801F970
sub_0801F970: @ 0x0801F970
	add r3, r0, #0
	ldr r0, _0801F998  @ =gUnknown_03000E20
	ldrb r1, [r3, #24]
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #15
	and r1, r1, r0
	lsl r2, r1, #24
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0801F994
	ldr r0, _0801F99C  @ =gUnknown_0813B1F4
	lsr r1, r2, #26
	add r1, r1, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	strh r0, [r3, #58]
_0801F994:
	bx lr
	.byte 0x00
	.byte 0x00
_0801F998:
	.4byte gUnknown_03000E20
_0801F99C:
	.4byte gUnknown_0813B1F4
	THUMB_FUNC_END sub_0801F970

