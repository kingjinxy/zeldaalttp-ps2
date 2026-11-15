	THUMB_FUNC_START sub_080DB990
sub_080DB990: @ 0x080DB990
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	mov r1, #95
	bl sub_080CF140
	mov r5, #5
	ldr r4, _080DBA6C  @ =gRam
	ldr r1, _080DBA70  @ =0x00000F12
	add r1, r1, r4
	mov r8, r1
	mov r7, #20
_080DB9B2:
	mov r0, #85
	mov r1, r10
	bl sub_080CA538
	add r3, r0, #0
	lsl r5, r5, #24
	cmp r3, #0
	blt _080DBA50
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	ldrh r1, [r0]
	add r1, r1, #4
	ldr r6, _080DBA74  @ =0x00000964
	add r0, r4, r6
	ldrh r2, [r0]
	add r2, r2, #4
	ldr r6, _080DBA78  @ =0x00000EE2
	add r0, r4, r6
	add r0, r3, r0
	strb r1, [r0]
	add r6, r6, #32
	add r0, r4, r6
	add r0, r3, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080DBA7C  @ =0x00000ED2
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	sub r6, r6, #16
	add r0, r4, r6
	add r0, r3, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r0, _080DBA80  @ =0x00001032
	add r2, r4, r0
	add r2, r3, r2
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _080DBA84  @ =0x00001122
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #4
	strb r1, [r0]
	ldr r2, _080DBA88  @ =0x00000FD2
	add r0, r4, r2
	add r0, r3, r0
	strb r1, [r0]
	ldr r6, _080DBA8C  @ =0x00001132
	add r0, r4, r6
	add r0, r3, r0
	strb r7, [r0]
	ldr r1, _080DBA90  @ =0x00000F82
	add r0, r4, r1
	add r0, r3, r0
	strb r7, [r0]
	add r2, r2, #144
	add r0, r4, r2
	add r0, r3, r0
	strb r7, [r0]
	ldr r6, _080DBA94  @ =0x00000F22
	add r2, r4, r6
	add r2, r3, r2
	ldr r0, _080DBA98  @ =gUnknown_08175E70
	asr r1, r5, #24
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	mov r0, r8
	add r2, r3, r0
	ldr r0, _080DBA9C  @ =gUnknown_08175E76
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
_080DBA50:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r5, r1
	lsr r5, r0, #24
	cmp r0, #0
	bge _080DB9B2
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DBA6C:
	.4byte gRam
_080DBA70:
	.4byte 0x00000F12
_080DBA74:
	.4byte 0x00000964
_080DBA78:
	.4byte 0x00000EE2
_080DBA7C:
	.4byte 0x00000ED2
_080DBA80:
	.4byte 0x00001032
_080DBA84:
	.4byte 0x00001122
_080DBA88:
	.4byte 0x00000FD2
_080DBA8C:
	.4byte 0x00001132
_080DBA90:
	.4byte 0x00000F82
_080DBA94:
	.4byte 0x00000F22
_080DBA98:
	.4byte gUnknown_08175E70
_080DBA9C:
	.4byte gUnknown_08175E76
	THUMB_FUNC_END sub_080DB990

