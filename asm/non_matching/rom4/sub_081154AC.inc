	THUMB_FUNC_START sub_081154AC
sub_081154AC: @ 0x081154AC
	push {r4,r5,lr}
	ldr r0, _081154F8  @ =gRam
	ldr r2, _081154FC  @ =0x00001787
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	bne _08115580
	ldr r1, _08115500  @ =0x00001754
	add r0, r5, r1
	ldrb r4, [r0]
	ldr r2, _08115504  @ =gUnknown_0200EBF0
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _081154DA
	ldr r1, _08115508  @ =0x000009B2
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08115528
_081154DA:
	ldr r2, _0811550C  @ =0x000009AD
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #15
	beq _08115514
	cmp r0, #8
	beq _08115514
	ldr r1, _08115510  @ =gUnknown_0200EC04
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	lsl r3, r0, #2
	b _0811552A
	.byte 0x00
	.byte 0x00
_081154F8:
	.4byte gRam
_081154FC:
	.4byte 0x00001787
_08115500:
	.4byte 0x00001754
_08115504:
	.4byte gUnknown_0200EBF0
_08115508:
	.4byte 0x000009B2
_0811550C:
	.4byte 0x000009AD
_08115510:
	.4byte gUnknown_0200EC04
_08115514:
	ldr r1, _08115524  @ =gUnknown_0817E9EC
	mov r2, #161
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r3, [r0]
	b _0811552A
_08115524:
	.4byte gUnknown_0817E9EC
_08115528:
	mov r3, #32
_0811552A:
	add r0, r5, #0
	ldr r2, _08115588  @ =0x00001724
	add r1, r0, r2
	mov r2, #0
	strb r3, [r1]
	ldr r1, _0811558C  @ =0x00001723
	add r0, r0, r1
	strb r2, [r0]
	mov r0, #128
	and r0, r0, r4
	cmp r0, #0
	beq _08115544
	mov r4, #0
_08115544:
	ldr r2, _08115590  @ =gUnknown_0200EBA0
	add r0, r4, r2
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _08115594  @ =gUnknown_0200EBB4
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _08115598  @ =gUnknown_0200EBC8
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _0811559C  @ =gUnknown_0200EBDC
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _081155A0  @ =gUnknown_0200EC04
	add r0, r4, r1
	ldrb r0, [r0]
	bl sub_081155A4
_08115580:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08115588:
	.4byte 0x00001724
_0811558C:
	.4byte 0x00001723
_08115590:
	.4byte gUnknown_0200EBA0
_08115594:
	.4byte gUnknown_0200EBB4
_08115598:
	.4byte gUnknown_0200EBC8
_0811559C:
	.4byte gUnknown_0200EBDC
_081155A0:
	.4byte gUnknown_0200EC04
	THUMB_FUNC_END sub_081154AC

