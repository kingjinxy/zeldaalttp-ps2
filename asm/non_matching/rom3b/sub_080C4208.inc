	THUMB_FUNC_START sub_080C4208
sub_080C4208: @ 0x080C4208
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #0
	bne _080C421A
	b _080C4324
_080C421A:
	ldr r3, _080C42A4  @ =gRam
	cmp r1, #253
	bls _080C422E
	ldr r1, _080C42A8  @ =0x00000FA2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #11
	bne _080C422E
	b _080C4330
_080C422E:
	add r2, r3, #0
	ldr r6, _080C42AC  @ =0x00000FF2
	add r0, r2, r6
	add r5, r4, r0
	ldrb r1, [r5]
	cmp r1, #154
	bne _080C4248
	ldr r6, _080C42B0  @ =0x00000EB5
	add r0, r2, r6
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #239
	bls _080C42EE
_080C4248:
	cmp r1, #27
	beq _080C42E6
	ldr r1, _080C42B4  @ =0x000010C2
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldrb r0, [r5]
	cmp r0, #146
	bne _080C426E
	ldr r6, _080C42B8  @ =0x00000F82
	add r0, r2, r6
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _080C42DE
_080C426E:
	mov r3, #33
	ldr r1, _080C42BC  @ =0x00000D84
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080C4294
	mov r3, #8
	ldr r6, _080C42C0  @ =0x000011B2
	add r0, r2, r6
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080C4294
	mov r3, #28
_080C4294:
	cmp r3, #8
	bne _080C42C4
	add r0, r4, #0
	mov r1, #83
	bl sub_080CF140
	b _080C42DE
	.byte 0x00
	.byte 0x00
_080C42A4:
	.4byte gRam
_080C42A8:
	.4byte 0x00000FA2
_080C42AC:
	.4byte 0x00000FF2
_080C42B0:
	.4byte 0x00000EB5
_080C42B4:
	.4byte 0x000010C2
_080C42B8:
	.4byte 0x00000F82
_080C42BC:
	.4byte 0x00000D84
_080C42C0:
	.4byte 0x000011B2
_080C42C4:
	cmp r3, #28
	bne _080C42D2
	add r0, r4, #0
	mov r1, #86
	bl sub_080CF140
	b _080C42DE
_080C42D2:
	cmp r3, #33
	bne _080C42DE
	add r0, r4, #0
	mov r1, #87
	bl sub_080CF140
_080C42DE:
	add r0, r4, #0
	bl sub_080C5320
	b _080C436C
_080C42E6:
	add r0, r4, #0
	bl sub_080C4F18
	b _080C436C
_080C42EE:
	ldr r1, _080C4318  @ =0x00000FA2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	ldr r2, _080C431C  @ =0x00000F52
	add r0, r3, r2
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r6, _080C4320  @ =0x00000FC2
	add r0, r3, r6
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #110
	bl sub_080CF0AC
	b _080C436C
	.byte 0x00
	.byte 0x00
_080C4318:
	.4byte 0x00000FA2
_080C431C:
	.4byte 0x00000F52
_080C4320:
	.4byte 0x00000FC2
_080C4324:
	ldr r3, _080C4338  @ =gRam
	ldr r1, _080C433C  @ =0x00000EC5
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #10
	bne _080C4340
_080C4330:
	add r0, r2, #0
	bl sub_080C536C
	b _080C436C
_080C4338:
	.4byte gRam
_080C433C:
	.4byte 0x00000EC5
_080C4340:
	ldr r6, _080C435C  @ =0x00000D84
	add r0, r3, r6
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _080C4360
	add r0, r2, #0
	bl sub_080C5320
	b _080C436C
_080C435C:
	.4byte 0x00000D84
_080C4360:
	ldr r2, _080C4374  @ =0x0000176F
	add r0, r3, r2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C536C
_080C436C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C4374:
	.4byte 0x0000176F
	THUMB_FUNC_END sub_080C4208

