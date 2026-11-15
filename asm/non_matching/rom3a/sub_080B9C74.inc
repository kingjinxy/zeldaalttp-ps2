	THUMB_FUNC_START sub_080B9C74
sub_080B9C74: @ 0x080B9C74
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _080B9D98  @ =gRam
	ldr r1, _080B9D9C  @ =0x00000A02
	add r0, r4, r1
	ldrb r0, [r0]
	mov r8, r0
	add r1, r1, #1
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	mov r1, r8
	orr r1, r1, r0
	mov r8, r1
	ldr r0, _080B9DA0  @ =0x00001124
	add r1, r4, r0
	mov r0, #53
	strb r0, [r1]
	mov r0, #2
	mov r1, #60
	mov r2, #1
	bl sub_080BD874
	mov r1, #1
	mov r9, r1
	add r6, r4, #0
	ldr r0, _080B9DA4  @ =0x000015DC
	add r0, r0, r6
	mov r10, r0
_080B9CB4:
	mov r1, r9
	lsl r3, r1, #24
	asr r4, r3, #24
	ldr r0, _080B9DA8  @ =0x00001122
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080B9DAC  @ =0x00000F22
	add r0, r6, r1
	add r0, r0, r4
	mov r12, r0
	ldrb r0, [r0]
	sub r0, r0, #1
	asr r0, r0, #1
	mov r1, #64
	and r0, r0, r1
	mov r1, #113
	eor r0, r0, r1
	strb r0, [r2]
	ldr r0, _080B9DB0  @ =0x00000F92
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080B9DB4  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080B9DB8  @ =gUnknown_08170F86
	lsl r0, r4, #1
	add r0, r0, r1
	add r7, r3, #0
	ldrh r0, [r0]
	cmp r8, r0
	bcc _080B9D3A
	ldr r1, _080B9DBC  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080B9D3A
	ldr r0, _080B9DC0  @ =0x00000F62
	add r3, r6, r0
	add r3, r4, r3
	ldrb r0, [r3]
	ldr r1, _080B9DC4  @ =gUnknown_08170F94
	add r0, r0, r1
	ldrb r2, [r0]
	mov r0, #248
	and r0, r0, r2
	strb r0, [r5]
	mov r1, #7
	and r1, r1, r2
	ldr r0, _080B9DC8  @ =gUnknown_03003142
	add r2, r4, r0
	ldr r0, _080B9DCC  @ =gUnknown_08170F8C
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080B9DD0  @ =gUnknown_08170F8A
	add r1, r1, r0
	ldrb r0, [r1]
	mov r1, r12
	strb r0, [r1]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080B9D3A:
	lsr r5, r7, #24
	ldr r0, _080B9DD4  @ =gUnknown_08170F81
	asr r4, r7, #24
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080B9DD8  @ =gUnknown_08170F83
	add r0, r4, r0
	ldrb r2, [r0]
	add r0, r5, #0
	bl sub_080BD874
	ldr r1, _080B9DDC  @ =0x00001012
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080B9DE0  @ =0x00001032
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #16
	strb r1, [r0]
	mov r0, #4
	bl sub_080CF370
	add r0, r5, #0
	bl sub_080C6230
	mov r1, r9
	mov r0, r10
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080CA58C
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r0, r4, #24
	mov r9, r0
	cmp r4, #0
	bge _080B9CB4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B9D98:
	.4byte gRam
_080B9D9C:
	.4byte 0x00000A02
_080B9DA0:
	.4byte 0x00001124
_080B9DA4:
	.4byte 0x000015DC
_080B9DA8:
	.4byte 0x00001122
_080B9DAC:
	.4byte 0x00000F22
_080B9DB0:
	.4byte 0x00000F92
_080B9DB4:
	.4byte 0x00000996
_080B9DB8:
	.4byte gUnknown_08170F86
_080B9DBC:
	.4byte 0x00000FC2
_080B9DC0:
	.4byte 0x00000F62
_080B9DC4:
	.4byte gUnknown_08170F94
_080B9DC8:
	.4byte gUnknown_03003142
_080B9DCC:
	.4byte gUnknown_08170F8C
_080B9DD0:
	.4byte gUnknown_08170F8A
_080B9DD4:
	.4byte gUnknown_08170F81
_080B9DD8:
	.4byte gUnknown_08170F83
_080B9DDC:
	.4byte 0x00001012
_080B9DE0:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080B9C74

