	THUMB_FUNC_START sub_080BA024
sub_080BA024: @ 0x080BA024
	push {r4-r6,lr}
	mov r6, #1
	ldr r4, _080BA110  @ =gRam
	ldr r1, _080BA114  @ =0x00000A02
	add r0, r4, r1
	ldrb r5, [r0]
	ldr r2, _080BA118  @ =0x00000A03
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r5, r5, r0
	mov r1, #2
	ldr r2, _080BA11C  @ =0x00001013
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080BA120  @ =0x00001033
	add r1, r4, r0
	mov r0, #16
	strb r0, [r1]
	sub r2, r2, #32
	add r1, r4, r2
	mov r0, #233
	strb r0, [r1]
	mov r0, #12
	bl sub_080CF370
	ldr r0, _080BA124  @ =0x00001123
	add r1, r4, r0
	mov r0, #55
	strb r0, [r1]
	mov r0, #1
	bl sub_080C1F70
	ldr r1, _080BA128  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080BA080
	ldr r2, _080BA12C  @ =0x00000F93
	add r0, r4, r2
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
_080BA080:
	mov r0, #1
	bl SpriteActive_MainLong
	ldr r0, _080BA130  @ =0x0000020F
	cmp r5, r0
	bls _080BA0AA
	ldr r0, _080BA134  @ =0x00000F13
	add r1, r4, r0
	mov r0, #4
	strb r0, [r1]
	ldr r1, _080BA138  @ =0x00000ED3
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #124
	beq _080BA0AA
	ldr r2, _080BA13C  @ =0x000015DC
	add r0, r4, r2
	strb r6, [r0]
	mov r0, #1
	bl sub_080CA58C
_080BA0AA:
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _080BA110  @ =gRam
	ldr r1, _080BA140  @ =0x00000FF2
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #54
	strb r1, [r0]
	mov r0, #24
	bl sub_080CF370
	ldr r2, _080BA144  @ =0x00001122
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #57
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C1F70
	ldr r1, _080BA148  @ =0x00000FC2
	add r0, r4, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080BA104
	mov r0, #4
	strb r0, [r1]
	ldr r2, _080BA118  @ =0x00000A03
	add r0, r4, r2
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #1
	and r0, r0, r1
	ldr r1, _080BA14C  @ =0x00000F92
	add r2, r4, r1
	add r2, r6, r2
	ldr r1, _080BA150  @ =gUnknown_08170FC3
	add r0, r0, r1
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	strb r0, [r2]
_080BA104:
	add r0, r6, #0
	bl SpriteActive_MainLong
	pop {r4-r6}
	pop {r0}
	bx r0
_080BA110:
	.4byte gRam
_080BA114:
	.4byte 0x00000A02
_080BA118:
	.4byte 0x00000A03
_080BA11C:
	.4byte 0x00001013
_080BA120:
	.4byte 0x00001033
_080BA124:
	.4byte 0x00001123
_080BA128:
	.4byte 0x00000996
_080BA12C:
	.4byte 0x00000F93
_080BA130:
	.4byte 0x0000020F
_080BA134:
	.4byte 0x00000F13
_080BA138:
	.4byte 0x00000ED3
_080BA13C:
	.4byte 0x000015DC
_080BA140:
	.4byte 0x00000FF2
_080BA144:
	.4byte 0x00001122
_080BA148:
	.4byte 0x00000FC2
_080BA14C:
	.4byte 0x00000F92
_080BA150:
	.4byte gUnknown_08170FC3
	THUMB_FUNC_END sub_080BA024

