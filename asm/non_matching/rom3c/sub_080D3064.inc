	THUMB_FUNC_START sub_080D3064
sub_080D3064: @ 0x080D3064
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080D3980
	ldr r6, _080D3150  @ =gRam
	ldr r1, _080D3154  @ =0x00001152
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	sub r0, r0, #2
	mov r7, #0
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r2, _080D3158  @ =0x00001142
	add r0, r6, r2
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D309A
	strb r7, [r2]
	strb r7, [r5]
_080D309A:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D314A
	ldr r1, _080D315C  @ =0x00001062
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080D3160  @ =0x00000F52
	add r2, r6, r1
	add r0, r0, r2
	ldrb r1, [r0]
	cmp r1, #5
	beq _080D30D8
	cmp r1, #7
	beq _080D30D8
	cmp r1, #9
	beq _080D30D8
	add r0, r4, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	beq _080D30D8
	cmp r0, #5
	beq _080D30D8
	cmp r0, #7
	beq _080D30D8
	cmp r0, #9
	bne _080D3132
_080D30D8:
	ldr r6, _080D3150  @ =gRam
	ldr r2, _080D3164  @ =0x00000F72
	add r0, r6, r2
	add r5, r4, r0
	ldrb r1, [r5]
	sub r0, r1, #1
	strb r0, [r5]
	cmp r1, #0
	bne _080D3132
	ldr r0, _080D3168  @ =0x00000F62
	add r2, r6, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r3, r0, #0
	add r0, r3, #1
	mov r1, #7
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080D316C  @ =0x00000F92
	add r1, r6, r2
	add r1, r4, r1
	ldr r0, _080D3170  @ =gUnknown_08174DB4
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D3174  @ =gUnknown_08174DBC
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r5]
	cmp r3, #1
	bne _080D3120
	ldr r1, _080D3154  @ =0x00001152
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
_080D3120:
	cmp r3, #3
	bne _080D3132
	add r0, r4, #0
	bl sub_080D3650
	add r0, r4, #0
	mov r1, #113
	bl sub_080CF0AC
_080D3132:
	ldr r1, _080D3178  @ =gUnknown_08174DC4
	ldr r0, _080D3150  @ =gRam
	ldr r2, _080D3160  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D314A:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D3150:
	.4byte gRam
_080D3154:
	.4byte 0x00001152
_080D3158:
	.4byte 0x00001142
_080D315C:
	.4byte 0x00001062
_080D3160:
	.4byte 0x00000F52
_080D3164:
	.4byte 0x00000F72
_080D3168:
	.4byte 0x00000F62
_080D316C:
	.4byte 0x00000F92
_080D3170:
	.4byte gUnknown_08174DB4
_080D3174:
	.4byte gUnknown_08174DBC
_080D3178:
	.4byte gUnknown_08174DC4
	THUMB_FUNC_END sub_080D3064

