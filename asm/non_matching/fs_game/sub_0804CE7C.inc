	THUMB_FUNC_START sub_0804CE7C
sub_0804CE7C: @ 0x0804CE7C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #16]
	cmp r1, #0
	beq _0804CEA0
	ldr r0, [r7]
	ldr r1, [r0, #16]
	ldrh r0, [r1]
	ldr r1, _0804CE9C  @ =0x0000FFFF
	cmp r0, r1
	beq _0804CEA0
	b _0804CEA4
	.byte 0x00
	.byte 0x00
_0804CE9C:
	.4byte 0x0000FFFF
_0804CEA0:
	mov r0, #1
	b _0804CEF6
_0804CEA4:
	ldr r0, [r7]
	ldrh r1, [r0, #8]
	cmp r1, #0
	beq _0804CECA
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #8]
	sub r1, r2, #1
	ldrh r2, [r0, #8]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #8]
	mov r0, #0
	b _0804CEF6
_0804CECA:
	ldr r0, _0804CEEC  @ =gUnknown_084287F0
	ldr r1, [r7]
	ldr r2, [r1, #16]
	ldrh r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804CEF0
	b _0804CEF2
	.byte 0x00
	.byte 0x00
_0804CEEC:
	.4byte gUnknown_084287F0
_0804CEF0:
	b _0804CECA
_0804CEF2:
	mov r0, #0
	b _0804CEF6
_0804CEF6:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CE7C

	.byte 0x00
	.byte 0x00
