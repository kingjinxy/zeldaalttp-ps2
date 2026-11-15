	THUMB_FUNC_START sub_080C2EE0
sub_080C2EE0: @ 0x080C2EE0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080C2F78  @ =gRam
	ldr r1, _080C2F7C  @ =0x00000968
	add r3, r4, r1
	ldr r2, _080C2F80  @ =0x00000EE2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r5, _080C2F84  @ =0x00000F02
	add r1, r4, r5
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	ldrh r1, [r3]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r7, _080C2F88  @ =0x0000097D
	add r5, r4, r7
	strb r1, [r5]
	lsr r1, r1, #15
	mov r2, #150
	lsl r2, r2, #4
	add r6, r4, r2
	strb r1, [r6]
	sub r7, r7, #17
	add r3, r4, r7
	ldr r2, _080C2F8C  @ =0x00000ED2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r7, _080C2F90  @ =0x00000EF2
	add r1, r4, r7
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldrh r0, [r3]
	sub r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080C2F94  @ =0x0000097C
	add r1, r4, r2
	strb r0, [r1]
	lsr r3, r0, #15
	ldr r7, _080C2F98  @ =0x00000961
	add r0, r4, r7
	strb r3, [r0]
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080C2F58
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_080C2F58:
	ldr r1, _080C2F9C  @ =0x000015F9
	add r0, r4, r1
	strb r2, [r0]
	ldrb r1, [r5]
	mov r0, #0
	ldrsb r0, [r5, r0]
	cmp r0, #0
	bge _080C2F70
	mvn r0, r1
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080C2F70:
	cmp r1, r2
	bcs _080C2FA0
	ldrb r0, [r6]
	b _080C2FA2
_080C2F78:
	.4byte gRam
_080C2F7C:
	.4byte 0x00000968
_080C2F80:
	.4byte 0x00000EE2
_080C2F84:
	.4byte 0x00000F02
_080C2F88:
	.4byte 0x0000097D
_080C2F8C:
	.4byte 0x00000ED2
_080C2F90:
	.4byte 0x00000EF2
_080C2F94:
	.4byte 0x0000097C
_080C2F98:
	.4byte 0x00000961
_080C2F9C:
	.4byte 0x000015F9
_080C2FA0:
	add r0, r3, #2
_080C2FA2:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C2EE0

