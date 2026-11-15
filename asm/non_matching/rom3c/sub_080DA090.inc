	THUMB_FUNC_START sub_080DA090
sub_080DA090: @ 0x080DA090
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080DA0C8  @ =gRam
	ldr r1, _080DA0CC  @ =0x00000F72
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r3, _080DA0D0  @ =0x00001151
	add r0, r2, r3
	ldrb r0, [r0]
	add r5, r2, #0
	cmp r0, #15
	bhi _080DA0DC
	ldr r0, _080DA0D4  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldr r3, _080DA0D8  @ =gUnknown_08175A18
	lsl r0, r1, #24
	lsr r0, r0, #29
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	b _080DA0E6
_080DA0C8:
	.4byte gRam
_080DA0CC:
	.4byte 0x00000F72
_080DA0D0:
	.4byte 0x00001151
_080DA0D4:
	.4byte 0x00000F92
_080DA0D8:
	.4byte gUnknown_08175A18
_080DA0DC:
	ldr r1, _080DA154  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
_080DA0E6:
	ldr r3, _080DA158  @ =0x00000F72
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080DA14C
	ldr r0, _080DA15C  @ =0x00000FA1
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	ldr r3, _080DA160  @ =0x00001151
	add r1, r5, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #22
	bne _080DA14C
	mov r0, #90
	mov r1, #0
	bl sub_0812A324
	ldr r0, _080DA164  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DA168  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r3, _080DA16C  @ =0x00001052
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080DA170  @ =0x00001002
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	neg r1, r1
	strb r1, [r0]
	ldr r3, _080DA174  @ =0x00001644
	add r1, r5, r3
	mov r0, #240
	strb r0, [r1]
_080DA14C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DA154:
	.4byte 0x00000F92
_080DA158:
	.4byte 0x00000F72
_080DA15C:
	.4byte 0x00000FA1
_080DA160:
	.4byte 0x00001151
_080DA164:
	.4byte 0x00000F52
_080DA168:
	.4byte 0x00000FC2
_080DA16C:
	.4byte 0x00001052
_080DA170:
	.4byte 0x00001002
_080DA174:
	.4byte 0x00001644
	THUMB_FUNC_END sub_080DA090

