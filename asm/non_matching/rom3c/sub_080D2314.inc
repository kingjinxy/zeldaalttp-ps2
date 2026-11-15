	THUMB_FUNC_START sub_080D2314
sub_080D2314: @ 0x080D2314
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080D239C  @ =gRam
	ldr r0, _080D23A0  @ =0x00001770
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080D23A4  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _080D2394
	ldr r0, _080D23A8  @ =0x000009B5
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	ldr r0, _080D23AC  @ =0x000009D4
	add r1, r4, r0
	mov r0, #48
	strb r0, [r1]
	ldr r1, _080D23B0  @ =0x00000CF8
	add r0, r4, r1
	strh r2, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strh r2, [r0]
	ldr r2, _080D23B4  @ =0x0000051E
	add r1, r4, r2
	mov r0, #185
	lsl r0, r0, #6
	strh r0, [r1]
	ldr r0, _080D23B8  @ =0x0000051A
	add r1, r4, r0
	mov r0, #63
	strh r0, [r1]
	ldr r1, _080D23BC  @ =0x00000998
	add r0, r4, r1
	mov r1, #15
	strb r1, [r0]
	ldr r2, _080D23C0  @ =0x00000999
	add r0, r4, r2
	strb r1, [r0]
	bl sub_081335FC
	ldr r0, _080D23C4  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080D23C8  @ =0x00000A3E
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #76
	bl sub_080CF0AC
	ldr r0, _080D23CC  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _080D23D0  @ =0x0000FFF3
	strh r0, [r1]
_080D2394:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D239C:
	.4byte gRam
_080D23A0:
	.4byte 0x00001770
_080D23A4:
	.4byte 0x00000FC2
_080D23A8:
	.4byte 0x000009B5
_080D23AC:
	.4byte 0x000009D4
_080D23B0:
	.4byte 0x00000CF8
_080D23B4:
	.4byte 0x0000051E
_080D23B8:
	.4byte 0x0000051A
_080D23BC:
	.4byte 0x00000998
_080D23C0:
	.4byte 0x00000999
_080D23C4:
	.4byte 0x00000F52
_080D23C8:
	.4byte 0x00000A3E
_080D23CC:
	.4byte 0x00000A3C
_080D23D0:
	.4byte 0x0000FFF3
	THUMB_FUNC_END sub_080D2314

