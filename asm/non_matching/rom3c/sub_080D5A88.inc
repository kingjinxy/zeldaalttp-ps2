	THUMB_FUNC_START sub_080D5A88
sub_080D5A88: @ 0x080D5A88
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _080D5B8C  @ =gRam
	ldr r0, _080D5B90  @ =0x00000EE2
	add r3, r4, r0
	add r3, r6, r3
	ldrb r1, [r3]
	ldr r7, _080D5B94  @ =0x00000F02
	add r2, r4, r7
	add r2, r6, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #10
	mov r5, #0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	ldr r1, _080D5B98  @ =0x00000F12
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #238
	strb r1, [r0]
	add r7, r7, #32
	add r0, r4, r7
	add r0, r6, r0
	strb r5, [r0]
	ldr r1, _080D5B9C  @ =0x00000F62
	add r0, r4, r1
	add r0, r6, r0
	strb r5, [r0]
	add r7, r7, #80
	add r1, r4, r7
	add r0, r6, r1
	strb r5, [r0]
	mov r5, #2
	mov r8, r1
_080D5AD8:
	mov r0, #130
	add r1, r6, #0
	bl sub_080CA538
	add r3, r0, #0
	lsl r5, r5, #24
	cmp r3, #0
	blt _080D5B76
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	ldr r0, _080D5BA0  @ =gUnknown_081751AC
	asr r2, r5, #24
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080D5BA4  @ =gUnknown_081751AF
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r7, _080D5B90  @ =0x00000EE2
	add r0, r4, r7
	add r0, r3, r0
	strb r1, [r0]
	add r7, r7, #32
	add r0, r4, r7
	add r0, r3, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080D5BA8  @ =0x00000964
	add r1, r4, r0
	ldr r0, _080D5BAC  @ =gUnknown_081751B2
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080D5BB0  @ =gUnknown_081751B5
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r7, r7, #48
	add r0, r4, r7
	add r0, r3, r0
	strb r1, [r0]
	add r7, r7, #32
	add r0, r4, r7
	add r0, r3, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080D5BB4  @ =0x00000F22
	add r1, r4, r0
	add r1, r3, r1
	ldr r0, _080D5BB8  @ =gUnknown_081751B8
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r7, r7, #32
	add r1, r4, r7
	add r1, r3, r1
	ldr r0, _080D5BBC  @ =gUnknown_081751BE
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D5B9C  @ =0x00000F62
	add r1, r4, r0
	add r1, r3, r1
	ldr r0, _080D5BC0  @ =gUnknown_081751BB
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r7, r8
	add r1, r3, r7
	ldr r0, _080D5BC4  @ =gUnknown_081751C1
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
_080D5B76:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r5, r1
	lsr r5, r0, #24
	cmp r0, #0
	bge _080D5AD8
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080D5B8C:
	.4byte gRam
_080D5B90:
	.4byte 0x00000EE2
_080D5B94:
	.4byte 0x00000F02
_080D5B98:
	.4byte 0x00000F12
_080D5B9C:
	.4byte 0x00000F62
_080D5BA0:
	.4byte gUnknown_081751AC
_080D5BA4:
	.4byte gUnknown_081751AF
_080D5BA8:
	.4byte 0x00000964
_080D5BAC:
	.4byte gUnknown_081751B2
_080D5BB0:
	.4byte gUnknown_081751B5
_080D5BB4:
	.4byte 0x00000F22
_080D5BB8:
	.4byte gUnknown_081751B8
_080D5BBC:
	.4byte gUnknown_081751BE
_080D5BC0:
	.4byte gUnknown_081751BB
_080D5BC4:
	.4byte gUnknown_081751C1
	THUMB_FUNC_END sub_080D5A88

