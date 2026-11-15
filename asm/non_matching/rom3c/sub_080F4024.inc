	THUMB_FUNC_START sub_080F4024
sub_080F4024: @ 0x080F4024
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r3, _080F4060  @ =gRam
	ldr r2, _080F4064  @ =0x00001082
	add r1, r3, r2
	add r1, r4, r1
	mov r2, #3
	eor r0, r0, r2
	strb r0, [r1]
	mov r2, #0
	ldr r0, _080F4068  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	beq _080F406C
	mov r1, #179
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #2
	bls _080F406E
	mov r2, #1
	b _080F406E
	.byte 0x00
	.byte 0x00
_080F4060:
	.4byte gRam
_080F4064:
	.4byte 0x00001082
_080F4068:
	.4byte gPendantCount
_080F406C:
	mov r2, #2
_080F406E:
	ldr r0, _080F40AC  @ =gUnknown_081795AC
	add r0, r2, r0
	ldrb r1, [r0]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F40A2
	ldr r2, _080F40B0  @ =gRam
	ldr r1, _080F40B4  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080F40B8  @ =0x00001082
	add r2, r2, r0
	add r2, r4, r2
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _080F40BC  @ =gHeartsFiller
	mov r0, #160
	strb r0, [r1]
_080F40A2:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F40AC:
	.4byte gUnknown_081795AC
_080F40B0:
	.4byte gRam
_080F40B4:
	.4byte 0x00000FB2
_080F40B8:
	.4byte 0x00001082
_080F40BC:
	.4byte gHeartsFiller
	THUMB_FUNC_END sub_080F4024

