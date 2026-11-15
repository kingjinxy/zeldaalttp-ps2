	THUMB_FUNC_START sub_080C3FCC
sub_080C3FCC: @ 0x080C3FCC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #15
	bne _080C3FE8
	ldr r0, _080C4050  @ =gRam
	ldr r2, _080C4054  @ =0x00001142
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C407A
_080C3FE8:
	cmp r1, #0
	beq _080C3FF0
	cmp r1, #7
	bne _080C4074
_080C3FF0:
	add r0, r4, #0
	bl sub_080C520C
	ldr r3, _080C4050  @ =gRam
	ldr r5, _080C4058  @ =0x00000EB5
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C407A
	ldr r0, _080C405C  @ =0x000015F0
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080C407A
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080C4060  @ =0x000015FA
	add r2, r3, r1
	sub r5, r5, #230
	add r0, r3, r5
	ldrb r1, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r0, #4
	ldr r5, _080C4064  @ =0x000015F1
	add r1, r3, r5
	strb r0, [r1]
	ldr r1, _080C4068  @ =0x00000DC5
	add r0, r3, r1
	ldrb r2, [r2]
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r2, _080C406C  @ =0x000015F2
	add r0, r3, r2
	strb r1, [r0]
	mov r5, #161
	lsl r5, r5, #4
	add r0, r3, r5
	ldrb r1, [r0]
	ldr r2, _080C4070  @ =0x00000DA4
	add r0, r3, r2
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #113
	bl sub_080CF0AC
	b _080C407A
_080C4050:
	.4byte gRam
_080C4054:
	.4byte 0x00001142
_080C4058:
	.4byte 0x00000EB5
_080C405C:
	.4byte 0x000015F0
_080C4060:
	.4byte 0x000015FA
_080C4064:
	.4byte 0x000015F1
_080C4068:
	.4byte 0x00000DC5
_080C406C:
	.4byte 0x000015F2
_080C4070:
	.4byte 0x00000DA4
_080C4074:
	add r0, r4, #0
	bl sub_080C520C
_080C407A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C3FCC

