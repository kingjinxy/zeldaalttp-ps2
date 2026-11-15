	THUMB_FUNC_START sub_080F1B20
sub_080F1B20: @ 0x080F1B20
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _080F1B9C  @ =gRam
	ldr r1, _080F1BA0  @ =0x00001610
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080F1B3A
	add r0, r4, #0
	bl sub_080F1E48
_080F1B3A:
	ldr r2, _080F1BA4  @ =0x00000FA2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #10
	bne _080F1B6A
	ldr r1, _080F1BA8  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r0, _080F1BAC  @ =0x00000F92
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080F1BB0  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #25
	add r0, r0, #3
	strb r0, [r2]
_080F1B6A:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F1B96
	add r0, r5, #0
	bl sub_080C841C
	cmp r0, #0
	bne _080F1B96
	ldr r1, _080F1BB4  @ =gUnknown_08178F30
	ldr r2, _080F1BA8  @ =0x00000F52
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080F1B96:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F1B9C:
	.4byte gRam
_080F1BA0:
	.4byte 0x00001610
_080F1BA4:
	.4byte 0x00000FA2
_080F1BA8:
	.4byte 0x00000F52
_080F1BAC:
	.4byte 0x00000F92
_080F1BB0:
	.4byte 0x00000996
_080F1BB4:
	.4byte gUnknown_08178F30
	THUMB_FUNC_END sub_080F1B20

