	THUMB_FUNC_START sub_080D4DA4
sub_080D4DA4: @ 0x080D4DA4
	push {r4-r6,lr}
	add r2, r0, #0
	add r5, r1, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	lsl r5, r5, #24
	lsr r5, r5, #24
	mov r0, #98
	add r1, r2, #0
	bl sub_080CA538
	ldr r4, _080D4E48  @ =gRam
	ldr r1, _080D4E4C  @ =0x00001122
	add r6, r4, r1
	add r6, r0, r6
	strb r5, [r6]
	ldr r2, _080D4E50  @ =0x00000EE2
	add r1, r4, r2
	add r1, r0, r1
	ldr r5, _080D4E54  @ =0x000016C4
	add r3, r4, r5
	ldrb r2, [r3]
	strb r2, [r1]
	ldr r2, _080D4E58  @ =0x00000F02
	add r1, r4, r2
	add r1, r0, r1
	add r5, r5, #1
	add r2, r4, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldrh r2, [r3]
	add r2, r2, #8
	ldr r3, _080D4E5C  @ =0x00000ED2
	add r1, r4, r3
	add r1, r0, r1
	strb r2, [r1]
	ldr r5, _080D4E60  @ =0x00000EF2
	add r1, r4, r5
	add r1, r0, r1
	lsr r2, r2, #8
	strb r2, [r1]
	ldr r2, _080D4E64  @ =0x00000F92
	add r1, r4, r2
	add r1, r0, r1
	mov r2, #4
	strb r2, [r1]
	ldr r3, _080D4E68  @ =0x00001052
	add r1, r4, r3
	add r1, r0, r1
	mov r3, #3
	mov r2, #3
	strb r2, [r1]
	ldr r5, _080D4E6C  @ =0x00001012
	add r1, r4, r5
	add r1, r0, r1
	mov r2, #64
	strb r2, [r1]
	ldr r2, _080D4E70  @ =0x00000FC2
	add r1, r4, r2
	add r1, r0, r1
	mov r2, #228
	strb r2, [r1]
	ldrb r2, [r6]
	lsr r2, r2, #1
	and r2, r2, r3
	sub r5, r5, #240
	add r3, r4, r5
	add r3, r0, r3
	ldr r1, _080D4E74  @ =gUnknown_08175070
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080D4E78  @ =0x00000F12
	add r4, r4, r1
	add r0, r0, r4
	ldr r1, _080D4E7C  @ =gUnknown_08175074
	add r2, r2, r1
	ldrb r1, [r2]
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080D4E48:
	.4byte gRam
_080D4E4C:
	.4byte 0x00001122
_080D4E50:
	.4byte 0x00000EE2
_080D4E54:
	.4byte 0x000016C4
_080D4E58:
	.4byte 0x00000F02
_080D4E5C:
	.4byte 0x00000ED2
_080D4E60:
	.4byte 0x00000EF2
_080D4E64:
	.4byte 0x00000F92
_080D4E68:
	.4byte 0x00001052
_080D4E6C:
	.4byte 0x00001012
_080D4E70:
	.4byte 0x00000FC2
_080D4E74:
	.4byte gUnknown_08175070
_080D4E78:
	.4byte 0x00000F12
_080D4E7C:
	.4byte gUnknown_08175074
	THUMB_FUNC_END sub_080D4DA4

