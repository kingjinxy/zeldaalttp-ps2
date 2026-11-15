	THUMB_FUNC_START sub_08114DC4
sub_08114DC4: @ 0x08114DC4
	push {r4-r6,lr}
	ldr r4, _08114E44  @ =gRam
	ldr r1, _08114E48  @ =0x000009AC
	add r0, r4, r1
	ldrb r2, [r0]
	add r5, r2, #0
	ldr r3, _08114E4C  @ =0x000009AD
	add r0, r4, r3
	ldrb r1, [r0]
	add r3, r1, #0
	ldr r6, _08114E50  @ =0x00001770
	add r0, r4, r6
	ldrb r6, [r0]
	cmp r6, #0
	beq _08114DE4
	b _08115016
_08114DE4:
	cmp r1, #11
	bne _08114DEA
	b _08115016
_08114DEA:
	cmp r2, #9
	bne _08114DF4
	cmp r1, #35
	bne _08114DF4
	b _08115016
_08114DF4:
	cmp r5, #14
	bne _08114E04
	cmp r3, #1
	bne _08114DFE
	b _08115016
_08114DFE:
	cmp r3, #2
	bne _08114E04
	b _08115016
_08114E04:
	bl sub_08115CA4
	ldr r0, _08114E54  @ =0x00001663
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #10
	bne _08114E64
	ldr r1, _08114E58  @ =0x00001702
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08114E64
	ldr r2, _08114E5C  @ =0x000017AA
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08114E64
	ldr r3, _08114E60  @ =0x00001754
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #20
	bne _08114E38
	mov r1, #0
_08114E38:
	mov r0, #0
	bl sub_080FB054
	strb r6, [r5]
	b _0811501A
	.byte 0x00
	.byte 0x00
_08114E44:
	.4byte gRam
_08114E48:
	.4byte 0x000009AC
_08114E4C:
	.4byte 0x000009AD
_08114E50:
	.4byte 0x00001770
_08114E54:
	.4byte 0x00001663
_08114E58:
	.4byte 0x00001702
_08114E5C:
	.4byte 0x000017AA
_08114E60:
	.4byte 0x00001754
_08114E64:
	ldr r5, _08114EF0  @ =gRam
	ldr r0, _08114EF4  @ =0x00001663
	add r6, r5, r0
	ldrb r0, [r6]
	cmp r0, #6
	bne _08114F1C
	ldr r1, _08114EF8  @ =0x000009DA
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #172
	bne _08114F1C
	ldr r0, _08114EFC  @ =gUnknown_020020CB
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08114F1C
	bl sub_08115BE0
	cmp r0, #0
	beq _08114F1C
	ldr r2, _08114F00  @ =0x00001754
	add r0, r5, r2
	ldrb r2, [r0]
	ldr r3, _08114F04  @ =gUnknown_0200EBC8
	add r0, r2, r3
	ldrb r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	mov r4, #0
	strb r1, [r0]
	ldr r1, _08114F08  @ =gUnknown_0200EBDC
	add r0, r2, r1
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _08114F0C  @ =gUnknown_0200EBA0
	add r0, r2, r1
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _08114F10  @ =gUnknown_0200EBB4
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r2, _08114F14  @ =0x00000965
	add r0, r5, r2
	strb r1, [r0]
	strb r4, [r6]
	bl sub_08101530
	mov r3, #177
	lsl r3, r3, #4
	add r1, r5, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r6, #192
	lsl r6, r6, #4
	add r0, r5, r6
	strh r4, [r0]
	ldr r1, _08114F18  @ =0x00000C02
	add r0, r5, r1
	strh r4, [r0]
	mov r0, #10
	bl sub_08070C74
	b _0811501A
_08114EF0:
	.4byte gRam
_08114EF4:
	.4byte 0x00001663
_08114EF8:
	.4byte 0x000009DA
_08114EFC:
	.4byte gUnknown_020020CB
_08114F00:
	.4byte 0x00001754
_08114F04:
	.4byte gUnknown_0200EBC8
_08114F08:
	.4byte gUnknown_0200EBDC
_08114F0C:
	.4byte gUnknown_0200EBA0
_08114F10:
	.4byte gUnknown_0200EBB4
_08114F14:
	.4byte 0x00000965
_08114F18:
	.4byte 0x00000C02
_08114F1C:
	ldr r0, _08114F44  @ =gRam
	ldr r3, _08114F48  @ =0x00001755
	add r2, r0, r3
	ldrb r1, [r2]
	add r4, r0, #0
	cmp r1, #0
	bne _08114F54
	ldr r5, _08114F4C  @ =0x00001718
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #19
	bne _08114F72
	ldr r6, _08114F50  @ =0x00001810
	add r0, r4, r6
	ldrb r0, [r0]
	cmp r0, #0
	beq _08114F72
	mov r0, #1
	strb r0, [r2]
	b _08114FDE
_08114F44:
	.4byte gRam
_08114F48:
	.4byte 0x00001755
_08114F4C:
	.4byte 0x00001718
_08114F50:
	.4byte 0x00001810
_08114F54:
	ldr r1, _08115020  @ =0x00001718
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #19
	beq _08114FDE
	ldr r3, _08115024  @ =0x00001756
	add r0, r4, r3
	ldr r5, _08115028  @ =0x00001754
	add r1, r4, r5
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08115006
	mov r0, #0
	strb r0, [r2]
_08114F72:
	ldr r6, _08115028  @ =0x00001754
	add r0, r4, r6
	ldrb r2, [r0]
	ldr r0, _0811502C  @ =gUnknown_0200EBF0
	add r3, r2, r0
	ldrb r1, [r3]
	cmp r1, #0
	beq _08114FCC
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _08114FCC
	ldr r5, _08115030  @ =0x00001758
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, r2
	bne _08115006
	strb r1, [r3]
	ldr r6, _08115034  @ =gUnknown_0200EBA0
	add r1, r2, r6
	mov r3, #182
	lsl r3, r3, #5
	add r0, r4, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r5, _08115038  @ =gUnknown_0200EBB4
	add r1, r2, r5
	ldr r6, _0811503C  @ =0x000016C1
	add r0, r4, r6
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08115040  @ =gUnknown_0200EBC8
	add r1, r2, r0
	add r3, r3, #4
	add r0, r4, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r5, r5, #40
	add r1, r2, r5
	add r6, r6, #4
	add r0, r4, r6
	ldrb r0, [r0]
	strb r0, [r1]
_08114FCC:
	ldr r1, _08115044  @ =0x000016D6
	add r0, r4, r1
	ldr r2, _08115048  @ =0x000016D7
	add r1, r4, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	beq _08115016
_08114FDE:
	ldr r3, _08115030  @ =0x00001758
	add r0, r4, r3
	ldrb r1, [r0]
	add r0, r1, #0
	sub r0, r0, #15
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08114FFC
	add r0, r1, #0
	add r0, r0, #20
	lsl r0, r0, #24
	lsr r1, r0, #24
_08114FFC:
	ldr r5, _08115028  @ =0x00001754
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r1, r0
	bne _08115016
_08115006:
	ldr r6, _08115028  @ =0x00001754
	add r4, r4, r6
	ldrb r0, [r4]
	add r0, r0, #1
	mov r1, #20
	bl __modsi3
	strb r0, [r4]
_08115016:
	bl sub_081154AC
_0811501A:
	pop {r4-r6}
	pop {r0}
	bx r0
_08115020:
	.4byte 0x00001718
_08115024:
	.4byte 0x00001756
_08115028:
	.4byte 0x00001754
_0811502C:
	.4byte gUnknown_0200EBF0
_08115030:
	.4byte 0x00001758
_08115034:
	.4byte gUnknown_0200EBA0
_08115038:
	.4byte gUnknown_0200EBB4
_0811503C:
	.4byte 0x000016C1
_08115040:
	.4byte gUnknown_0200EBC8
_08115044:
	.4byte 0x000016D6
_08115048:
	.4byte 0x000016D7
	THUMB_FUNC_END sub_08114DC4

