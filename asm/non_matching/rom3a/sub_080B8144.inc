	THUMB_FUNC_START sub_080B8144
sub_080B8144: @ 0x080B8144
	push {r4-r6,lr}
	ldr r2, _080B8178  @ =gRam
	ldr r0, _080B817C  @ =0x000009D3
	add r1, r2, r0
	mov r0, #130
	strb r0, [r1]
	ldr r3, _080B8180  @ =gUnknown_0817064C
	ldr r1, _080B8184  @ =0x000009AD
	add r0, r2, r1
	ldrb r1, [r0]
	lsl r1, r1, #24
	lsr r0, r1, #25
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	ldr r3, _080B8188  @ =0x000009DA
	add r2, r2, r3
	strh r0, [r2]
	lsr r1, r1, #24
	cmp r1, #12
	beq _080B8172
	cmp r1, #30
	bne _080B818C
_080B8172:
	bl sub_08078274
	b _080B8190
_080B8178:
	.4byte gRam
_080B817C:
	.4byte 0x000009D3
_080B8180:
	.4byte gUnknown_0817064C
_080B8184:
	.4byte 0x000009AD
_080B8188:
	.4byte 0x000009DA
_080B818C:
	bl sub_08076C48
_080B8190:
	ldr r0, _080B81B0  @ =gRam
	ldr r1, _080B81B4  @ =0x000009C6
	add r0, r0, r1
	ldrb r0, [r0]
	mov r2, #191
	and r2, r2, r0
	cmp r2, #3
	beq _080B81A8
	cmp r2, #5
	beq _080B81A8
	cmp r2, #7
	bne _080B81B8
_080B81A8:
	mov r0, #88
	bl sub_0812FD88
	b _080B81BE
_080B81B0:
	.4byte gRam
_080B81B4:
	.4byte 0x000009C6
_080B81B8:
	mov r0, #90
	bl sub_0812FD88
_080B81BE:
	ldr r4, _080B8248  @ =gRam
	ldr r3, _080B824C  @ =0x000009AD
	add r6, r4, r3
	ldrb r0, [r6]
	lsr r2, r0, #1
	ldr r0, _080B8250  @ =gUnknown_08170698
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _080B8254  @ =0x00000C9B
	add r0, r4, r3
	strb r1, [r0]
	ldr r0, _080B8258  @ =gUnknown_081706BE
	add r0, r2, r0
	ldrb r5, [r0]
	bl sub_0812E8DC
	bl sub_080774C8
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	strh r5, [r0]
	mov r3, #0
	ldrsh r0, [r0, r3]
	ldr r2, _080B825C  @ =gUnknown_0814C8E8
	ldr r3, _080B8260  @ =0x000009C6
	add r1, r4, r3
	ldrb r1, [r1]
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_0813084C
	ldr r0, _080B8264  @ =0x00000CAA
	add r4, r4, r0
	mov r0, #1
	strb r0, [r4]
	bl sub_08130384
	ldrb r0, [r6]
	cmp r0, #0
	beq _080B8214
	cmp r0, #40
	bne _080B8218
_080B8214:
	bl sub_081293B0
_080B8218:
	bl sub_080763E4
	bl sub_08130AB4
	ldr r4, _080B8248  @ =gRam
	ldr r1, _080B8260  @ =0x000009C6
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #127
	bls _080B8230
	bl sub_08130978
_080B8230:
	ldr r3, _080B8268  @ =0x000009CE
	add r1, r4, r3
	mov r0, #9
	strb r0, [r1]
	ldr r0, _080B826C  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_080B8248:
	.4byte gRam
_080B824C:
	.4byte 0x000009AD
_080B8250:
	.4byte gUnknown_08170698
_080B8254:
	.4byte 0x00000C9B
_080B8258:
	.4byte gUnknown_081706BE
_080B825C:
	.4byte gUnknown_0814C8E8
_080B8260:
	.4byte 0x000009C6
_080B8264:
	.4byte 0x00000CAA
_080B8268:
	.4byte 0x000009CE
_080B826C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080B8144

