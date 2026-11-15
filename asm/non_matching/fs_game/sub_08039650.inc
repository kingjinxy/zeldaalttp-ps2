	THUMB_FUNC_START sub_08039650
sub_08039650: @ 0x08039650
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	add r0, r7, #2
	add r1, r7, #3
	add r2, r7, #4
	mov r3, #15
	strb r3, [r2]
	mov r2, #15
	strb r2, [r1]
	mov r1, #15
	strb r1, [r0]
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_0803966E:
	add r0, r7, #0
	ldr r1, _0803967C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08039680
	b _08039720
_0803967C:
	.4byte gUnknown_03006C80
_08039680:
	ldr r0, _0803969C  @ =gUnknown_03006C80
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #3
	add r0, r0, #40
	add r1, r0, r2
	ldr r0, [r1]
	mov r1, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080396A0
	mov r0, #1
	b _0803973C
_0803969C:
	.4byte gUnknown_03006C80
_080396A0:
	add r0, r7, #1
	ldr r1, _0803971C  @ =gUnknown_03006C80
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #3
	add r2, r1, r3
	add r1, r2, #0
	add r2, r2, #45
	ldrb r1, [r2]
	strb r1, [r0]
	add r4, r7, #2
	add r0, r7, #1
	ldrb r1, [r0]
	add r0, r1, #0
	mov r1, #1
	bl sub_08039744
	add r1, r7, #2
	ldrb r2, [r1]
	add r1, r0, #0
	add r0, r2, #0
	and r0, r0, r1
	add r1, r0, #0
	strb r1, [r4]
	add r4, r7, #3
	add r0, r7, #1
	ldrb r1, [r0]
	add r0, r1, #0
	mov r1, #2
	bl sub_08039744
	add r1, r7, #3
	ldrb r2, [r1]
	add r1, r0, #0
	add r0, r2, #0
	and r0, r0, r1
	add r1, r0, #0
	strb r1, [r4]
	add r4, r7, #4
	add r0, r7, #1
	ldrb r1, [r0]
	add r0, r1, #0
	mov r1, #3
	bl sub_08039744
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r0, #0
	add r0, r2, #0
	and r0, r0, r1
	add r1, r0, #0
	strb r1, [r4]
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0803966E
	.byte 0x00
	.byte 0x00
_0803971C:
	.4byte gUnknown_03006C80
_08039720:
	add r0, r7, #2
	ldrb r1, [r0]
	cmp r1, #7
	beq _0803972C
	mov r0, #1
	b _0803973C
_0803972C:
	add r0, r7, #3
	ldrb r1, [r0]
	cmp r1, #7
	beq _08039738
	mov r0, #2
	b _0803973C
_08039738:
	mov r0, #3
	b _0803973C
_0803973C:
	add sp, sp, #8
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08039650

