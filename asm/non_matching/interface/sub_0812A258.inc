	THUMB_FUNC_START sub_0812A258
sub_0812A258: @ 0x0812A258
	push {lr}
	cmp r0, #0
	bne _0812A262
	mov r0, #64
	b _0812A2A6
_0812A262:
	mov r2, #0
	ldrsh r1, [r0, r2]
	cmp r1, #0
	bge _0812A26E
	mov r0, #0
	b _0812A2A6
_0812A26E:
	cmp r1, #240
	bgt _0812A2A4
	mov r1, #0
	ldrsh r0, [r0, r1]
	bl __floatsidf
	ldr r3, _0812A298  @ =0x00000000
	ldr r2, _0812A294  @ =0x406E0000
	bl __divdf3
	ldr r2, _0812A29C  @ =0x405FC000
	ldr r3, _0812A2A0  @ =0x00000000
	bl __muldf3
	bl __fixdfsi
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _0812A2A6
_0812A294:
	.4byte 0x406E0000
_0812A298:
	.4byte 0x00000000
_0812A29C:
	.4byte 0x405FC000
_0812A2A0:
	.4byte 0x00000000
_0812A2A4:
	mov r0, #127
_0812A2A6:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812A258

	.byte 0x00
	.byte 0x00
