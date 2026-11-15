	THUMB_FUNC_START sub_0807407C
sub_0807407C: @ 0x0807407C
	push {r4,lr}
	ldr r0, _080740BC  @ =gRam
	ldr r2, _080740C0  @ =0x000009C6
	add r1, r0, r2
	ldrh r1, [r1]
	add r4, r0, #0
	cmp r1, #112
	beq _08074096
	ldr r1, _080740C4  @ =0x0000165E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	bhi _08074158
_08074096:
	ldr r0, _080740C8  @ =gUnknown_020022F0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _08074158
	ldr r2, _080740CC  @ =0x00000996
	add r0, r4, r2
	ldrb r1, [r0]
	add r0, r1, #0
	cmp r0, #3
	bne _080740D4
	ldr r0, _080740D0  @ =0x00000504
	add r1, r4, r0
	mov r0, #48
	bl sub_0812A324
	b _080740D8
	.byte 0x00
	.byte 0x00
_080740BC:
	.4byte gRam
_080740C0:
	.4byte 0x000009C6
_080740C4:
	.4byte 0x0000165E
_080740C8:
	.4byte gUnknown_020022F0
_080740CC:
	.4byte 0x00000996
_080740D0:
	.4byte 0x00000504
_080740D4:
	cmp r0, #92
	bne _080740F0
_080740D8:
	ldr r1, _080740E8  @ =0x00000998
	add r0, r4, r1
	mov r1, #31
	strb r1, [r0]
	ldr r2, _080740EC  @ =0x00000999
	add r0, r4, r2
	strb r1, [r0]
	b _08074110
_080740E8:
	.4byte 0x00000998
_080740EC:
	.4byte 0x00000999
_080740F0:
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08074110
	ldr r0, _08074178  @ =0x00000998
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #10
	bls _08074110
	sub r0, r0, #1
	strb r0, [r1]
	ldr r2, _0807417C  @ =0x00000999
	add r1, r4, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_08074110:
	ldr r2, _08074180  @ =gRam
	ldr r1, _08074184  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	bne _08074158
	ldr r0, _08074188  @ =0x00000B3C
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strh r0, [r2]
	ldr r1, _0807418C  @ =0x0000095C
	add r3, r4, r1
	ldr r1, _08074190  @ =gUnknown_0814D794
	ldrh r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r1, [r3]
	add r0, r0, r1
	strh r0, [r3]
	ldr r0, _08074194  @ =0x0000095E
	add r3, r4, r0
	ldr r1, _08074198  @ =gUnknown_0814D79C
	ldrh r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r1, [r3]
	add r0, r0, r1
	strh r0, [r3]
_08074158:
	ldr r2, _0807419C  @ =0x00000952
	add r0, r4, r2
	ldrh r1, [r0]
	sub r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080741A0  @ =0x00000958
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074178:
	.4byte 0x00000998
_0807417C:
	.4byte 0x00000999
_08074180:
	.4byte gRam
_08074184:
	.4byte 0x00000996
_08074188:
	.4byte 0x00000B3C
_0807418C:
	.4byte 0x0000095C
_08074190:
	.4byte gUnknown_0814D794
_08074194:
	.4byte 0x0000095E
_08074198:
	.4byte gUnknown_0814D79C
_0807419C:
	.4byte 0x00000952
_080741A0:
	.4byte 0x00000958
	THUMB_FUNC_END sub_0807407C

