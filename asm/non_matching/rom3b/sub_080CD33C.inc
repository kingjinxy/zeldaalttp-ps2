	THUMB_FUNC_START sub_080CD33C
sub_080CD33C: @ 0x080CD33C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080CD484  @ =gRam
	ldr r1, _080CD488  @ =0x00000D4B
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
	ldr r2, _080CD48C  @ =0x00000D33
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #8
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	ldr r1, _080CD490  @ =0x00000D23
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080CD494  @ =0x00000D2B
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	ldr r2, _080CD498  @ =0x00000964
	add r0, r5, r2
	strh r1, [r0]
	ldr r1, _080CD49C  @ =0x00000D5B
	add r0, r5, r1
	add r7, r4, r0
	ldrb r1, [r7]
	add r0, r4, #0
	bl sub_080C781C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #130
	bne _080CD47C
	ldrb r1, [r6]
	cmp r1, #23
	bhi _080CD47C
	mov r6, #3
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080CD47C
	mov r0, #156
	add r1, r4, #0
	mov r2, #12
	bl sub_080C9AAC
	add r4, r0, #0
	cmp r4, #0
	blt _080CD47C
	bl GetRandomInt
	mov r3, #7
	and r3, r3, r0
	ldr r2, _080CD4A0  @ =0x00000969
	add r0, r5, r2
	ldrb r2, [r0]
	ldr r1, _080CD4A4  @ =0x0000096C
	add r0, r5, r1
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080CD4A8  @ =gUnknown_08172B50
	add r0, r3, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	add r2, r2, #8
	ldr r0, _080CD4AC  @ =gUnknown_08172B58
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080CD4B0  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080CD4B4  @ =0x00000ED2
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080CD4B8  @ =0x0000096D
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #8
	strb r0, [r1]
	ldr r1, _080CD4BC  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #3
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CD4C0  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r7]
	strb r1, [r0]
	ldr r2, _080CD4C4  @ =0x00001132
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	sub r2, r2, #208
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r2, _080CD4C8  @ =0x00001172
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080CD4CC  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r2, _080CD4D0  @ =0x00001012
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080CD4D4  @ =0x00001122
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #13
	strb r1, [r0]
	bl GetRandomInt
	ldr r2, _080CD4D8  @ =0x00001052
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
	ldr r1, _080CD4DC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	ldr r2, _080CD4E0  @ =0x00000EA5
	add r0, r5, r2
	add r0, r4, r0
	strb r6, [r0]
_080CD47C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CD484:
	.4byte gRam
_080CD488:
	.4byte 0x00000D4B
_080CD48C:
	.4byte 0x00000D33
_080CD490:
	.4byte 0x00000D23
_080CD494:
	.4byte 0x00000D2B
_080CD498:
	.4byte 0x00000964
_080CD49C:
	.4byte 0x00000D5B
_080CD4A0:
	.4byte 0x00000969
_080CD4A4:
	.4byte 0x0000096C
_080CD4A8:
	.4byte gUnknown_08172B50
_080CD4AC:
	.4byte gUnknown_08172B58
_080CD4B0:
	.4byte 0x00000EE2
_080CD4B4:
	.4byte 0x00000ED2
_080CD4B8:
	.4byte 0x0000096D
_080CD4BC:
	.4byte 0x00000EF2
_080CD4C0:
	.4byte 0x000010F2
_080CD4C4:
	.4byte 0x00001132
_080CD4C8:
	.4byte 0x00001172
_080CD4CC:
	.4byte 0x00000F12
_080CD4D0:
	.4byte 0x00001012
_080CD4D4:
	.4byte 0x00001122
_080CD4D8:
	.4byte 0x00001052
_080CD4DC:
	.4byte 0x00000FC2
_080CD4E0:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_080CD33C

