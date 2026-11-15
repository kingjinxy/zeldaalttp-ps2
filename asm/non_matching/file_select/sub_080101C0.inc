	THUMB_FUNC_START sub_080101C0
sub_080101C0: @ 0x080101C0
	push {r4,r5,lr}
	mov r2, #0
	mov r4, #0
	ldr r5, _080101D4  @ =gUnknown_0200B250
	mov r3, #2
	neg r3, r3
	mov r1, #1
	neg r1, r1
	b _080101DE
	.byte 0x00
	.byte 0x00
_080101D4:
	.4byte gUnknown_0200B250
_080101D8:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_080101DE:
	cmp r4, #2
	bhi _08010202
	lsl r0, r4, #6
	add r0, r0, r5
	add r0, r0, #63
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, r3
	beq _080101F8
	cmp r0, r1
	beq _080101FC
	b _080101FE
_080101F8:
	mov r2, #5
	b _08010206
_080101FC:
	mov r2, #4
_080101FE:
	cmp r2, #0
	beq _080101D8
_08010202:
	cmp r2, #0
	beq _08010224
_08010206:
	add r1, r4, #1
	add r0, r2, #0
	bl sub_08010104
	ldr r1, _08010220  @ =gUnknown_0200B250
	lsl r0, r4, #6
	add r0, r0, r1
	add r0, r0, #63
	mov r1, #0
	strb r1, [r0]
	mov r0, #1
	b _08010226
	.byte 0x00
	.byte 0x00
_08010220:
	.4byte gUnknown_0200B250
_08010224:
	mov r0, #0
_08010226:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080101C0

