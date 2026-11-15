	THUMB_FUNC_START sub_0800C4FC
sub_0800C4FC: @ 0x0800C4FC
	push {r4,lr}
	ldr r3, _0800C530  @ =0x04000208
	mov r4, #0
	strh r4, [r3]
	ldr r2, _0800C534  @ =0x04000200
	ldrh r1, [r2]
	ldr r0, _0800C538  @ =0x0000FF3F
	and r0, r0, r1
	strh r0, [r2]
	mov r0, #1
	strh r0, [r3]
	ldr r1, _0800C53C  @ =0x04000128
	ldr r2, _0800C540  @ =0x00002003
	add r0, r2, #0
	strh r0, [r1]
	sub r1, r1, #28
	ldr r0, _0800C544  @ =0x0000B72F
	str r0, [r1]
	add r1, r1, #246
	mov r0, #192
	strh r0, [r1]
	ldr r0, _0800C548  @ =gUnknown_02030790
	strb r4, [r0, #6]
	pop {r4}
	pop {r0}
	bx r0
_0800C530:
	.4byte 0x04000208
_0800C534:
	.4byte 0x04000200
_0800C538:
	.4byte 0x0000FF3F
_0800C53C:
	.4byte 0x04000128
_0800C540:
	.4byte 0x00002003
_0800C544:
	.4byte 0x0000B72F
_0800C548:
	.4byte gUnknown_02030790
	THUMB_FUNC_END sub_0800C4FC

