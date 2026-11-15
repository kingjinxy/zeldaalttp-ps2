	THUMB_FUNC_START sub_080C4D5C
sub_080C4D5C: @ 0x080C4D5C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r6, r1, #24
	ldr r5, _080C4DE8  @ =gRam
	ldr r1, _080C4DEC  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _080C4DF0  @ =0x00000F02
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #16
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _080C4DF4  @ =0x00000964
	add r1, r5, r3
	mov r0, #15
	strb r0, [r1]
	ldr r1, _080C4DF8  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r3, _080C4DFC  @ =0x00000EF2
	add r0, r5, r3
	add r0, r4, r0
	ldr r3, _080C4E00  @ =0x00000961
	add r1, r5, r3
	strb r2, [r1]
	ldrb r1, [r0]
	ldr r2, _080C4E04  @ =0x00000971
	add r0, r5, r2
	strb r1, [r0]
	add r3, r3, #4
	add r1, r5, r3
	mov r0, #8
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C4E72
	ldr r0, _080C4E08  @ =0x00000FF2
	add r1, r5, r0
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #63
	bne _080C4E10
	ldr r1, _080C4E0C  @ =0x000015F0
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C4E6C
	add r0, r4, #0
	mov r1, #113
	bl sub_080CF0AC
	add r0, r4, #0
	bl sub_080C444C
	b _080C4E6C
_080C4DE8:
	.4byte gRam
_080C4DEC:
	.4byte 0x00000EE2
_080C4DF0:
	.4byte 0x00000F02
_080C4DF4:
	.4byte 0x00000964
_080C4DF8:
	.4byte 0x00000ED2
_080C4DFC:
	.4byte 0x00000EF2
_080C4E00:
	.4byte 0x00000961
_080C4E04:
	.4byte 0x00000971
_080C4E08:
	.4byte 0x00000FF2
_080C4E0C:
	.4byte 0x000015F0
_080C4E10:
	add r0, r4, r1
	ldrb r0, [r0]
	mov r1, #3
	cmp r0, #236
	bne _080C4E36
	ldr r2, _080C4E78  @ =0x00000F82
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _080C4E36
	ldr r3, _080C4E7C  @ =0x000009B2
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080C4E36
	mov r1, #1
_080C4E36:
	add r0, r6, #0
	bl sub_080C3FCC
	ldr r1, _080C4E80  @ =gRam
	ldr r0, _080C4E84  @ =0x00001112
	add r2, r1, r0
	add r2, r6, r2
	ldr r3, _080C4E88  @ =0x00000F22
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	strb r0, [r2]
	ldr r0, _080C4E8C  @ =0x00001102
	add r2, r1, r0
	add r2, r6, r2
	sub r3, r3, #16
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	strb r0, [r2]
	ldr r0, _080C4E90  @ =0x000010E2
	add r1, r1, r0
	add r1, r4, r1
	mov r0, #16
	strb r0, [r1]
_080C4E6C:
	add r0, r4, #0
	bl sub_080C50E4
_080C4E72:
	pop {r4-r6}
	pop {r0}
	bx r0
_080C4E78:
	.4byte 0x00000F82
_080C4E7C:
	.4byte 0x000009B2
_080C4E80:
	.4byte gRam
_080C4E84:
	.4byte 0x00001112
_080C4E88:
	.4byte 0x00000F22
_080C4E8C:
	.4byte 0x00001102
_080C4E90:
	.4byte 0x000010E2
	THUMB_FUNC_END sub_080C4D5C

